--Показать сотовый и рабочий телефонный номер (PhoneNumber), идентификационный номер сотрудника
--(BusinessEntityID) и вид телефонного номера (PhoneNumberTypeID) 
--из таблицы Person.PersonPhone, где вид телефонного номера или 1 (сотовый)
--или 3 (рабочий). Использовать оператор IN Отсортировать строки в алфавитном порядке 
SELECT  "PhoneNumber"  ,"BusinessEntityID" , "PhoneNumberTypeID" 
FROM "Person"."PersonPhone" 
WHERE "PhoneNumberTypeID" in ( 1, 3) ;
