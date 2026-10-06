# Домашнее задание к работе 2

## Условие задачи
В течение месяца продавец доставлял на дом 4 л. молока в день. В марте молоко стоило `x` руб. за литр. С первого апреля цена молока увеличилась на `(x + a)` руб. за литр. Сколько надо заплатить продавцу за все доставленное молоко в конце апреля? Количество покупаемого молока осталось прежним.

---

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить константы:
   - `DAILY_VOLUME` = 4 (л/день) — ежедневный объем покупки.
   - `DAYS_IN_MARCH` = 31 — количество дней в марте.
   - `DAYS_IN_APRIL` = 30 — количество дней в апреле.
3. Задать исходные данные:
   - `x` — цена 1 литра молока в марте (руб.).
   - `a` — величина, на которую базовая цена увеличивается в апреле (руб.).
4. Вычислить стоимость молока в марте:
   - `price_march` = `x`
   - `total_march` = `DAILY_VOLUME` * `DAYS_IN_MARCH` * `price_march`
5. Вычислить новую цену молока в апреле:
   - `price_april` = `x` + (`x` + `a`)
6. Вычислить стоимость молока в апреле:
   - `total_april` = `DAILY_VOLUME` * `DAYS_IN_APRIL` * `price_april`
7. Вычислить общую сумму к оплате:
   - `total_to_pay` = `total_march` + `total_april`
8. Вывести результаты расчетов с подстановкой всех значений в текст.
9. **Конец**

### Блок-схема

```xml
<mxfile host="app.diagrams.net" modified="2026-10-07T12:00:00.000Z" agent="Mozilla/5.0" version="21.0.0" type="device">
  <diagram name="Page-1" id="page1">
    <mxGraphModel dx="860" dy="460" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" background="#ffffff" math="0" shadow="0">
      <root>
        <mxCell id="0"/>
        <mxCell id="1" parent="0"/>
        <mxCell id="start" value="Начало" style="ellipse;whiteSpace=wrap;html=1;fillColor=#d5e8d4;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="280" y="20" width="120" height="40" as="geometry"/>
        </mxCell>
        <mxCell id="input" value="Ввод: x, a" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fillColor=#fff2cc;strokeColor=#d6b656;" vertex="1" parent="1">
          <mxGeometry x="260" y="90" width="160" height="40" as="geometry"/>
        </mxCell>
        <mxCell id="proc1" value="price_march = x&#10;total_march = 4 * 31 * price_march" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="240" y="160" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="proc2" value="price_april = x + (x + a)&#10;total_april = 4 * 30 * price_april" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="240" y="240" width="200" height="50" as="geometry"/>
        </mxCell>
        <mxCell id="proc3" value="total_to_pay = total_march + total_april" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="240" y="320" width="200" height="40" as="geometry"/>
        </mxCell>
        <mxCell id="output" value="Вывод: total_to_pay" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;fillColor=#fff2cc;strokeColor=#d6b656;" vertex="1" parent="1">
          <mxGeometry x="260" y="390" width="160" height="40" as="geometry"/>
        </mxCell>
        <mxCell id="end" value="Конец" style="ellipse;whiteSpace=wrap;html=1;fillColor=#f8cecc;strokeColor=#b85450;" vertex="1" parent="1">
          <mxGeometry x="280" y="460" width="120" height="40" as="geometry"/>
        </mxCell>
        <mxCell id="e1" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="start" target="input"/>
        <mxCell id="e2" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="input" target="proc1"/>
        <mxCell id="e3" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="proc1" target="proc2"/>
        <mxCell id="e4" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="proc2" target="proc3"/>
        <mxCell id="e5" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="proc3" target="output"/>
        <mxCell id="e6" value="" style="endArrow=classic;html=1;exitX=0.5;exitY=1;entryX=0.5;entryY=0;" edge="1" parent="1" source="output" target="end"/>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
## 2. Реализация программы

<!-- Вставьте код программы-->

## 3. Результаты работы программы

[После запуска программы просто скопируйте вывод из консоли и вставьте его в этот раздел ]

## 4. Информация о разработчике

Тухватулин Евгений Романович, бТИИ-261
