SELECT 
    P."FirstName",
    P."LastName",
    E."Gender"
FROM 
    "HumanResources"."Employee" E
RIGHT OUTER JOIN 
    "Person"."Person" P ON E."BusinessEntityID" = P."BusinessEntityID"
