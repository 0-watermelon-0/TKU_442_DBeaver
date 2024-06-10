--Показать hash пароля пользователей (PasswordHash) и поля FirstName, 
--LastName из таблиц Person.Password, Person.Person
SELECT 
    P."PasswordHash",
    P2."FirstName",
    P2."LastName"
FROM      "Person"."Password" AS P
JOIN  
"Person"."Person" AS P2 
 ON P."BusinessEntityID" = P2."BusinessEntityID";
