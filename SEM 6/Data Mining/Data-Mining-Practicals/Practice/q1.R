datafile <- file.choose("./people.txt")

peoplefile <- read.table(datafile,header=TRUE,sep=",") #Read the data from the file “people.txt”
peoplefile  #display entire table

edit(peoplefile)

install.packages("sqldf")
library(sqldf)
help("sqldf")

#Create a ruleset E that contain rules to check for the following conditions:

#RULE SET 1
#The age should be in the range 0-150.
peoplefile
query1 <- "SELECT AGE, AGEGROUP, HEIGHT, STATUS,YEARSMARRIED
           FROM peoplefile
           WHERE AGE >=0 AND AGE <=150"
sqldf(query1)


#RULE SET 2
#The age should be greater than yearsmarried.
query2 <- "SELECT AGE, AGEGROUP, HEIGHT, STATUS, YEARSMARRIED
                FROM peoplefile
                WHERE AGE > YEARSMARRIED"
sqldf(query2)

#RULE SET 3
#The status should be married or single or widowed.
query3 <- "SELECT AGE, AGEGROUP, HEIGHT, STATUS, YEARSMARRIED
                FROM peoplefile
                WHERE STATUS='married' OR STATUS='single'OR STATUS='widowed' "
sqldf(query3)

#RULE SET 4
#If age is less than 18 the agegroup should be child, if age is between 18 and 65 the age group 
#should be adult, if age is more than 65 the agegroup should be elderly.
query3 <- "SELECT AGE, AGEGROUP, HEIGHT, STATUS, YEARSMARRIED
                FROM peoplefile
                WHERE AGE < 18 AND AGEGROUP = 'child' OR
                AGE BETWEEN 18 AND 65 AND AGEGROUP = 'adult' OR 
                AGE > 65 AND AGEGROUP = 'elderly' "
sqldf(query4)
peoplefile

#iii) Check whether ruleset E is violated by the data in the file people.txt.
#iv) Summarize the results obtained in part (iii)
#v) Visualize the results obtained in part (iii)
# Summary Statistics on peoplefile dataset
#mean
mean(peoplefile$Age,na.rm = TRUE)
mean(peoplefile$HEIGHT,na.rm = TRUE) 
mean(peoplefile$YEARSMARRIED,na.rm = TRUE) 

#median
median(peoplefile$AGE,na.rm = TRUE)
median(peoplefile$HEIGHT,na.rm = TRUE) 
median(peoplefile$YEARSMARRIED,na.rm = TRUE) 

#variance
var(peoplefile$AGE,na.rm = TRUE)
var(peoplefile$HEIGHT,na.rm = TRUE) 
var(peoplefile$YEARSMARRIED,na.rm = TRUE) 



#standard deviation
sd(peoplefile$AGE,na.rm = TRUE)
sd(peoplefile$HEIGHT,na.rm = TRUE) 
sd(peoplefile$YEARSMARRIED,na.rm = TRUE) 


#Mean Absolute Difference
mad(peoplefile$AGE,na.rm = TRUE)
mad(peoplefile$HEIGHT,na.rm = TRUE) 
mad(peoplefile$YEARSMARRIED,na.rm = TRUE) 


#Minimun and Maximum
min(peoplefile$AGE,na.rm = TRUE)
min(peoplefile$HEIGHT,na.rm = TRUE) 
min(peoplefile$YEARSMARRIED,na.rm = TRUE) 

max(peoplefile$AGE,na.rm = TRUE)
max(peoplefile$HEIGHT,na.rm = TRUE) 
max(peoplefile$YEARSMARRIED,na.rm = TRUE) 


#Quanties
quantile(peoplefile$AGE,na.rm = TRUE)
quantile(peoplefile$HEIGHT,na.rm = TRUE) 
quantile(peoplefile$YEARSMARRIED,na.rm = TRUE) 

IQR(peoplefile$AGE,na.rm = TRUE)
IQR(peoplefile$HEIGHT,na.rm = TRUE) 
IQR(peoplefile$YEARSMARRIED,na.rm = TRUE) 

#Five number Summary
fivenum(peoplefile$AGE,na.rm = TRUE)
fivenum(peoplefile$HEIGHT,na.rm = TRUE) 
fivenum(peoplefile$YEARSMARRIED,na.rm = TRUE) 


# Dataset Summary
summary(peoplefile)

#________________________PLOTTING______________________
#SCATTER PLOTS
peolplefile

with(peoplefile,plot(AGE,HEIGHT, main="Age versus Height" , xlab="Age", 
                     ylab="Height", col= "blue", pch=18, log="xy"))



#lattice
library(lattice)
(scatter_lattice<- xyplot(AGE~HEIGHT, peoplefile,main="Age versus Height" , xlab="Age", 
                          ylab="Height", col= "blue", pch=18,scales = list(log=TRUE))) 

(scatter_latice_update <- update(scatter_lattice, col = "violet", pch = 20))


###############################################################
# ggplot
library(ggplot2)

ggplot(peoplefile, aes(x = AGE, y = HEIGHT)) + 
  geom_point(size = 0.5) + 
  ggtitle("Age versus Height") + 
  xlab("Age") + ylab("Height")

#another version
peoplefile
peoplefile$AGEGROUP [peoplefile$AGEGROUP == 1] <- "adult"
peoplefile$AGEGROUP [peoplefile$AGEGROUP == 2] <- "child"
peoplefile$AGEGROUP [peoplefile$AGEGROUP == 3] <- "elderly"