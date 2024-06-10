--2)	Найти количество работников мужского пола, которые младше 50 лет 
--из таблицы HumanResources.Employee (из выборки исключить пустые поля). 
SELECT  count(*)
FROM "HumanResources"."Employee" e 
WHERE "BirthDate" > '1975-01-01' and "Gender" = 'M';

