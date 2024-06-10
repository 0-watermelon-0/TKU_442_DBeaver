--Показать список людей (поля FirstName, LastName), в котором отражается
--, указан у человека пол или нет, из таблиц HumanResources.Employee,
-- Person.Person, используя RIGHT OUTER JOIN
SELECT 
    P."FirstName",
    P."LastName",
    E."Gender"
FROM 
    "HumanResources"."Employee" E
RIGHT OUTER JOIN 
    "Person"."Person" P ON E."BusinessEntityID" = P."BusinessEntityID"
