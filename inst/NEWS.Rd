\name{NEWS}
\title{News for Package \pkg{RcppStreams}}
\newcommand{\cpkg}{\href{http://CRAN.R-project.org/package=#1}{\pkg{#1}}}

\section{Changes in version 0.1.4 (2024-01-29)}{
  \itemize{
    \item Package maintenance with updates to DESCRIPTION and README.md
    \item Continunous integration has been update multiple times
    \item No longer set a C++ compilation standard
  }
}

\section{Changes in version 0.1.3 (2019-02-24)}{
  \itemize{
    \item No longer run examples as they upset the UBSAN checks at CRAN
  }
}

\section{Changes in version 0.1.2 (2019-01-05)}{
  \itemize{
    \item Added symbol registration
    \item Converted a few files from CRLF to CR [CRAN checks]
    \item Added a few final newlines [CRAN checks]
    \item Disabled one optional output to enable BH 1.69 builds
  }
}

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

