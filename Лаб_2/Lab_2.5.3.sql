SELECT "BusinessEntityID", 
"PayFrequency",
MAX("Rate") AS MaxRate
FROM "HumanResources"."EmployeePayHistory"
GROUP BY "BusinessEntityID", "PayFrequency",
GROUPING SETS (("BusinessEntityID", "PayFrequency"), ());

