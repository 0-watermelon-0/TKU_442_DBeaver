SELECT 
    p."FirstName",
    p."LastName",
    p."LastName" AS "PreviousLastName"
FROM 
    "HumanResources"."EmployeePayHistory" emp
JOIN 
    "Person"."Person" p ON emp."BusinessEntityID" = p."BusinessEntityID"
LEFT JOIN 
    "HumanResources"."Employee" prev ON emp."BusinessEntityID" = prev."BusinessEntityID" + 1
WHERE 
    emp."PayFrequency" IS NOT NULL
ORDER BY 
    p."LastName";
