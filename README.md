# php basic extension

## Install Steps

 Make sure that your custom-compiled-PHP is first in your PATH. If it isn’t, put it there before doing the rest of the install.

- $ echo $PATH

 $PHPDIR/install-debug-zts/bin:/usr/local/bin:/usr/bin

- $ phpize
- $ ./configure
- $ make
- $ make install

__Add in php.ini__

extension=hello.so

## Usage
$ php -r 'sayhello();'

