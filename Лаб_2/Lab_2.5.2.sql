SELECT "BusinessEntityID", "PayFrequency", MAX("Rate") AS MaxRate
FROM "HumanResources"."EmployeePayHistory"
GROUP BY CUBE ("Businessentityid" , "Payfrequency");
