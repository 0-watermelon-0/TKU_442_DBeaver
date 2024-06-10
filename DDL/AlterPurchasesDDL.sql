--Добавление внешних ключей
alter table "Purchases"
add constraint "FK_Purchases_id_buyer"
foreign key ("id_buyer")
references "Buyers" ("ID");

--Добавление внешних ключей
alter table "Purchases"
add constraint "FK_Purchases_id_object"
foreign key ("id_object")
references "Objects" ("ID");