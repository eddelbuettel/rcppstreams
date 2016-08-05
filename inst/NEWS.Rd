\name{NEWS}
\title{News for Package \pkg{RcppStreams}}
\newcommand{\cpkg}{\href{http://CRAN.R-project.org/package=#1}{\pkg{#1}}}

\section{Changes in version 0.1.1 (2016-08-05)}{
  \itemize{
    \item Compilation is now done using C++11 standards per request of
    CRAN to help with an array of newer (pre-release) and older
    compilers
    \item The Travis CI script was updated to use \code{run.sh} from our
    fork; it now also installs all dependencies as binary .deb files.
    \item The README.md was updated with additional badges.
    \item The DESCRIPTION file now has URL and BugReports entries.
  }
}

\section{Changes in version 0.1.0 (2015-01-30)}{
  \itemize{
    \item First CRAN release
    \item Contains all upstream examples and documentation from Streamulus
    \item Added Rcpp Attributes wrapping and minimal manual pages
    \item Added Travis CI unit testing
  }
}

