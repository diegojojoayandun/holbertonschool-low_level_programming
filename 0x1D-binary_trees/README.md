# 0x1A. Application server
:open_file_folder:
Foundations - System engineering & DevOps ― Web stack
:bust_in_silhouette:
by Sylvain Kalache
:copyright:
**[Holberton School](https://www.holbertonschool.com/)**

## Background Context
Your web infrastructure is already serving web pages via ```Nginx``` that you installed in your first web stack project. While a web server can also serve dynamic content, this task is usually given to an application server. In this project you will add this piece to your infrastructure, plug it to your ```Nginx``` and make is serve your Airbnb clone project.

## Resources
* [Web Server](https://intranet.hbtn.io/concepts/17)
  - [server concept page](https://intranet.hbtn.io/concepts/67)
    - [What is a server](https://en.wikipedia.org/wiki/Server_(computing)#Hardware_requirement)
    - [What is a server](https://www.youtube.com/watch?v=B1ANfsDyjeA)
    - [Where are servers hosted (data centers)](https://www.youtube.com/watch?v=iuqXFC_qIvA&feature=youtu.be&t=33)
  - [Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine)
  - [container](https://www.cio.com/article/2924995/what-are-containers-and-why-do-you-need-them.html)
  - [Wikipedia page about web server](https://en.wikipedia.org/wiki/Web_server)
  - [Web server](https://whatis.techtarget.com/definition/Web-server)
  - [What is a Web Server?](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/What_is_a_web_server)
* [Web stack debugging](https://intranet.hbtn.io/concepts/68)
  - [5 commands](https://www.linux.com/training-tutorials/first-5-commands-when-i-connect-linux-server/)
  - [First 5 Commands When I Connect on a Linux Server](https://www.youtube.com/watch?v=1_gqlbADaAw&feature=youtu.be)
    - [uptime and downtime](https://whatis.techtarget.com/definition/uptime-and-downtime)
    - [Understanding Linux CPU Load](https://scoutapm.com/blog/understanding-load-averages)
    - [Linux Load Averages](http://www.brendangregg.com/blog/2017-08-08/linux-load-averages.html)
* [first web stack project](https://intranet.hbtn.io/projects/266)
* [Application server vs web server](https://www.nginx.com/resources/glossary/application-server-vs-web-server/)
* [How to Serve a Flask Application with Gunicorn and Nginx on Ubuntu 16.04](https://www.digitalocean.com/community/tutorials/how-to-serve-flask-applications-with-gunicorn-and-nginx-on-ubuntu-16-04)
* [Running Gunicorn](https://docs.gunicorn.org/en/latest/run.html)
* [Be careful with the way Flask manages slash](https://werkzeug.palletsprojects.com/en/0.14.x/routing/)
* [route](https://flask.palletsprojects.com/en/1.0.x/api/#flask.Flask.route)
* [Upstart documentation](http://upstart.ubuntu.com/cookbook/)
* [AirBnB clone v2 - Web framework](https://intranet.hbtn.io/projects/290)
* [task #3](https://intranet.hbtn.io/tasks/1372)
* [SSH project](https://intranet.hbtn.io/projects/244)
* [WSGI](https://www.fullstackpython.com/wsgi-servers.html)
* [Understanding Nginx Server and Location Block Selection Algorithms](https://www.digitalocean.com/community/tutorials/understanding-nginx-server-and-location-block-selection-algorithms#matching-location-blocks)
* [Understanding Nginx Location Blocks Rewrite Rules](http://blog.pixelastic.com/2013/09/27/understanding-nginx-location-blocks-rewrite-rules/)
* [Nginx Reverse Proxy](https://docs.nginx.com/nginx/admin-guide/web-server/reverse-proxy/#)
* [AirBnB clone v3 - RESTful API](https://intranet.hbtn.io/projects/301)
* [this project](https://intranet.hbtn.io/projects/289)
* [AirBnB clone - Web dynamic](https://intranet.hbtn.io/projects/309)
* [it costs the company $2M](https://storageservers.wordpress.com/2016/03/14/amazon-downtime-costs-2-million-loss-per-minute/)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/2012/04/feynman-technique/), without the help of Google:
###### General
```Nginx```

## Requirements
```Shellcheck```
```Gunicorn```
## Tasks

<details>
<summary>View Contents</summary>

### [0. Set up development with Python](./README.md)

- Let’s serve what you built for AirBnB clone v2 - Web framework on web-01. This task is an exercise in setting up your development environment, which is used for testing and debugging your code before deploying it to production.
  - Git clone your AirBnB_clone_v2 on your web-01 server.
  - Configure the file web_flask/0-hello_route.py to serve its content from the route /airbnb-onepage/ on port 5000.
  - Your Flask application object must be named app (This will allow us to run and check your code).

Window 1

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ python3 -m web_flask.0-hello_route
 * Serving Flask app "0-hello_route" (lazy loading)
 * Environment: production
   WARNING: Do not use the development server in a production environment.
   Use a production WSGI server instead.
 * Debug mode: off
 * Running on http://0.0.0.0:5000/ (Press CTRL+C to quit)
35.231.193.217 - - [02/May/2019 22:19:42] "GET /airbnb-onepage/ HTTP/1.1" 200 -
```

Window 2

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ curl 127.0.0.1:5000/airbnb-onepage/
Hello HBNB!ubuntu@229-web-01:~/AirBnB_clone_v2$
```

### [1. Set up production with Gunicorn](./)

- Now that you have your development environment set up, let’s get your production application server set up with Gunicorn on web-01, port 5000. You’ll need to install Gunicorn and any libraries required by your application. Your Flask application object will serve as a WSGI entry point into your application. This will be your production environment. As you can see we want the production and development of your application to use the same port, so the conditions for serving your dynamic content are the same in both environments.
  - Install Gunicorn and any other libraries required by your application.
  - The Flask application object should be called app. (This will allow us to run and check your code)
  - You will serve the same content from the same route as in the previous task. You can verify that it’s working by binding a Gunicorn instance to localhost listening on port 5000 with your application object as the entry point.
  - In order to check your code, the checker will bind a Gunicorn instance to port 6000, so make sure nothing is listening on that port.

Window 1

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ gunicorn --bind 0.0.0.0:5000 web_flask.0-hello_route:app
[2019-05-06 20:43:57 +0000] [14026] [INFO] Starting gunicorn 19.9.0
[2019-05-06 20:43:57 +0000] [14026] [INFO] Listening at: http://0.0.0.0:5000 (14026)
[2019-05-06 20:43:57 +0000] [14026] [INFO] Using worker: sync
[2019-05-06 20:43:57 +0000] [14029] [INFO] Booting worker with pid: 14029
```

Window 2

```
ubuntu@229-web-01:~$ curl 127.0.0.1:5000/airbnb-onepage/
Hello HBNB!ubuntu@229-web-01:~$
```

### [2. Serve a page with Nginx](./2-app_server-nginx_config)

- Building on your work in the previous tasks, configure Nginx to serve your page from the route /airbnb-onepage/
  - Nginx must serve this page both locally and on its public IP on port 80.
  - Nginx should proxy requests to the process listening on port 5000.
  - Include your Nginx config file as 2-app_server-nginx_config.
- Notes:
  - In order to test this you’ll have to spin up either your production or development application server (listening on port 5000)
  - In an actual production environment the application server will be configured to start upon startup in a system initialization script. This will be covered in the advanced tasks.

Window 1

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ gunicorn --bind 0.0.0.0:5000 web_flask.0-hello_route:app
[2019-05-06 20:43:57 +0000] [14026] [INFO] Starting gunicorn 19.9.0
[2019-05-06 20:43:57 +0000] [14026] [INFO] Listening at: http://0.0.0.0:5000 (14026)
[2019-05-06 20:43:57 +0000] [14026] [INFO] Using worker: sync
[2019-05-06 20:43:57 +0000] [14029] [INFO] Booting worker with pid: 14029
```

Window 2

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ curl 127.0.0.1/airbnb-onepage/
Hello HBNB!ubuntu@229-web-01:~/AirBnB_clone_v2$
```

Local

```
vagrant@ubuntu-xenial:~$ curl -sI 35.231.193.217/airbnb-onepage/
HTTP/1.1 200 OK
Server: nginx/1.10.3 (Ubuntu)
Date: Mon, 06 May 2019 20:44:55 GMT
Content-Type: text/html; charset=utf-8
Content-Length: 11
Connection: keep-alive
X-Served-By: 229-web-01

vagrant@ubuntu-xenial:~$ curl 35.231.193.217/airbnb-onepage/
```

### [3. Add a route with query parameters](./3-app_server-nginx_config)

- Building on what you did in the previous tasks, let’s expand our web application by adding another service for Gunicorn to handle. In AirBnB_clone_v2/web_flask/6-number_odd_or_even, the route /number_odd_or_even/<int:n> should already be defined to render a page telling you whether an integer is odd or even. You’ll need to configure Nginx to proxy HTTP requests to the route /airbnb-dynamic/number_odd_or_even/(any integer) to a Gunicorn instance listening on port 5001. The key to this exercise is getting Nginx configured to proxy requests to processes listening on two different ports. You are not expected to keep your application server processes running. If you want to know how to run multiple instances of Gunicorn without having multiple terminals open, see tips below.
  - Nginx must serve this page both locally and on its public IP on port 80.
  - Nginx should proxy requests to the route /airbnb-dynamic/number_odd_or_even/(any integer) the process listening on port 5001.
  - Include your Nginx config file as 3-app_server-nginx_config.

Terminal 1

```
ubuntu@229-web-01:~/AirBnB_clone_v2$ tmux new-session -d 'gunicorn --bind 0.0.0.0:5000 web_flask.0-hello_route:app'
ubuntu@229-web-01:~/AirBnB_clone_v2$ pgrep gunicorn
1661
1665
ubuntu@229-web-01:~/AirBnB_clone_v2$ tmux new-session -d 'gunicorn --bind 0.0.0.0:5001 web_flask.6-number_odd_or_even:app'
ubuntu@229-web-01:~/AirBnB_clone_v2$ pgrep gunicorn
1661
1665
1684
1688

ubuntu@229-web-01:~/AirBnB_clone_v2$ curl 127.0.0.1:5000/airbnb-onepage/
Hello HBNB!ubuntu@229-web-01:~/AirBnB_clone_v2$

ubuntu@229-web-01:~/AirBnB_clone_v2$ curl 127.0.0.1:5001/number_odd_or_even/6
```

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>HBNB</title>
  </head>
  <body>
    <h1>Number: 6 is even</h1>
  </body>
</html>
```

```
ubuntu@229-web-01:~/AirBnB_clone_v2
ubuntu@229-web-01:~$
ubuntu@229-web-01:~/AirBnB_clone_v2$ curl 127.0.0.1/airbnb-dynamic/number_odd_or_even/5
```

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>HBNB</title>
  </head>
  <body>
    <h1>Number: 5 is odd</h1>
  </body>
</html>
```

Local

```
vagrant@ubuntu-xenial:~$ curl 35.231.193.217/airbnb-dynamic/number_odd_or_even/6
```

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <title>HBNB</title>
  </head>
  <body>
    <h1>Number: 6 is even</h1>
  </body>
</html>
```

### [4. Let's do this for your API](./4-app_server-nginx_config)

- Let’s serve what you built for AirBnB clone v3 - RESTful API on web-01.

  - Git clone your AirBnB_clone_v3
  - Setup Nginx so that the route /api/ points to a Gunicorn instance listening on port 5002
  - Nginx must serve this page both locally and on its public IP on port 80
  - To test your setup you should bind Gunicorn to api/v1/app.py
  - It may be helpful to import your data (and environment variables) from this project
  - Upload your Nginx config file as 4-app_server-nginx_config

Terminal 1

```
ubuntu@229-web-01:~/AirBnB_clone_v3$ tmux new-session -d 'gunicorn --bind 0.0.0.0:5002 api.v1.app:app'
ubuntu@229-web-01:~/AirBnB_clone_v3$ curl 127.0.0.1:5002/api/v1/states
[{"__class__":"State","created_at":"2019-05-10T00:39:27.032802","id":"7512f664-4951-4231-8de9-b18d940cc912","name":"California","updated_at":"2019-05-10T00:39:27.032965"},{"__class__":"State","created_at":"2019-05-10T00:39:36.021219","id":"b25625c8-8a7a-4c1f-8afc-257bf9f76bc8","name":"Arizona","updated_at":"2019-05-10T00:39:36.021281"}]
ubuntu@229-web-01:~/AirBnB_clone_v3$
ubuntu@229-web-01:~/AirBnB_clone_v3$ curl 127.0.0.1/api/v1/states
[{"__class__":"State","created_at":"2019-05-10T00:39:27.032802","id":"7512f664-4951-4231-8de9-b18d940cc912","name":"California","updated_at":"2019-05-10T00:39:27.032965"},{"__class__":"State","created_at":"2019-05-10T00:39:36.021219","id":"b25625c8-8a7a-4c1f-8afc-257bf9f76bc8","name":"Arizona","updated_at":"2019-05-10T00:39:36.021281"}]
```

Local

```
vagrant@ubuntu-xenial:~$ curl 35.231.193.217/api/v1/states
[{"__class__":"State","created_at":"2019-05-10T00:39:27.032802","id":"7512f664-4951-4231-8de9-b18d940cc912","name":"California","updated_at":"2019-05-10T00:39:27.032965"},{"__class__":"State","created_at":"2019-05-10T00:39:36.021219","id":"b25625c8-8a7a-4c1f-8afc-257bf9f76bc8","name":"Arizona","updated_at":"2019-05-10T00:39:36.021281"}]
```

### [5. Serve your AirBnB clone](./5-app_server-nginx_config)

- Let’s serve what you built for AirBnB clone - Web dynamic on web-01.
  - Git clone your AirBnB_clone_v4
  - Your Gunicorn instance should serve content from web_dynamic/2-hbnb.py on port 5003
  - Setup Nginx so that the route / points to your Gunicorn instance
  - Setup Nginx so that it properly serves the static assets found in web_dynamic/static/ (this is essential for your page to render properly)
  - For your website to be fully functional, you will need to reconfigure web_dynamic/static/scripts/2-hbnb.js to the correct IP
  - Nginx must serve this page both locally and on its public IP and port 5003
  - Make sure to pull up your Developer Tools on your favorite browser to verify that you have no errors
  - Upload your Nginx config as 5-app_server-nginx_config
