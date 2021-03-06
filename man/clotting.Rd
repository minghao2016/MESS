% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/MESS-package.R
\docType{data}
\name{clotting}
\alias{clotting}
\title{Blood clotting for 158 rats}
\format{A data frame with 158 observations on the following 6 variables.
\describe{ \item{rat}{a numeric vector} \item{locality}{a
factor with levels \code{Loc1} \code{Loc2}} \item{sex}{a factor with
levels \code{F} \code{M}} \item{weight}{a numeric vector}
\item{PCA0}{a numeric vector with percent blood clotting activity at
baseline} \item{PCA4}{a numeric vector with percent blood clotting
activity on day 4} }}
\source{
Ann-Charlotte Heiberg, project at The Royal Veterinary and
Agricultural University, 1999. \cr Added by Ib M. Skovgaard <ims@life.ku.dk>
}
\description{
Blood clotting activity (PCA) is measured for 158 Norway rats from two
locations just before (baseline) and four days after injection of an
anticoagulant (bromadiolone). Normally this would cause reduced blood
clotting after 4 days compared to the baseline, but these rats are known to
possess anticoagulent resistence to varying extent. The purpose is to relate
anticoagulent resistence to gender and location and perhaps weight. Dose of
injection is, however, admistered according to weight and gender.
}
\examples{

 data(clotting)
 dim(clotting)
 head(clotting)
 day0= transform(clotting, day=0, pca=PCA0)
 day4= transform(clotting, day=4, pca=PCA4)
 day.both= rbind(day0,day4)
 m1= lm(pca ~ rat + day*locality + day*sex, data=day.both)
 anova(m1)
 summary(m1)
 m2= lm(pca ~ rat + day, data=day.both)
 anova(m2)
## Log transformation suggested.
## Random effect of rat.
## maybe str(clotting) ; plot(clotting) ...

}
\keyword{datasets}

