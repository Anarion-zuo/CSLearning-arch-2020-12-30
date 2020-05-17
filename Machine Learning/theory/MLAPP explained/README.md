# MLAPP Explained

## What’s in the Markdown Files

I started this as a personal note on the MLAPP book, expanding over-simplified equations and adding background information. As a college student in China, I find the notations and descriptions in the book fuzzy and confusing. I would often forget the semantic of a certain notation, having no choice but to go back and find the origin of the letter or operator. This way of reading is slow and frustrating. Therefore, I have this repository.

This is a huge book, and Machine Learning is a huge topic. I wish you guys might help me, and many others struggling in this field, to work this out.

## How does this Work

The goal of the project is to write annotations to the equations and statements in the book MLAPP. 

## Reading Options

### Read Online

### Read Offline

The project is based on gitbook. If you don’t have gitbook installed, run:

```shell
npm install -g gitbook-cli
```

 Clone the repository and run:

```shell
gitbook serve
```

The output info tells in which port the book is serving.

```shell
Starting server ...
Serving book on http://localhost:4000
```

Copy the url into your browser and enjoy!

![Getting Started...](asset/README/Screen%20Shot%202020-03-21%20at%2019.46.13.png)



### Convert to PDF

Of course, you are free to create your own pdf version, by using `gitbook-pdf`. The official repository is on [gitbook-pdf](https://github.com/GitbookIO/gitbook-pdf).

Following the guidence on the repository, install gitbook-pdf by:

```shell
npm install gitbook-pdf -g
```

Make use of it under a gitbook directory:

```shell
gitbook pdf /path/to/the/book
```

You may not have ‘calibre’ installed, therefore not able to run this successfully. Goto [calibre](https://calibre-ebook.com/download) and download.

