SELECT 
    P."PasswordHash",
    P2."FirstName",
    P2."LastName"
FROM      "Person"."Password" AS P
JOIN  
"Person"."Person" AS P2 
 ON P."BusinessEntityID" = P2."BusinessEntityID";
