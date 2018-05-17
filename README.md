<!DOCTYPE html>
<html>

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>README.md</title>
  <link rel="stylesheet" href="https://stackedit.io/style.css" />
</head>

<body class="stackedit">
  <div class="stackedit__html"><h1 id="recursividad-">Recursividad <a href="https://travis-ci.com/KROSF/Recursividad"><img src="https://travis-ci.com/KROSF/Recursividad.svg?branch=master" alt="Build Status"></a></h1>
<ul>
<li>
<p>Escribe una función recursiva cifras que reciba un número en <code>base 10</code> y devuelva cuántas cifras tiene ese número.</p>
<ul>
<li><a href="./src/binariodecimal.c">Implementación</a></li>
</ul>
</li>
<li>
<p>Escribe una función recursiva elevar que reciba un argumento real <code>a</code> y otro entero <code>b</code>,con <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>b</mi><mo>&gt;</mo><mn>0</mn></mrow><annotation encoding="application/x-tex">b &gt; 0</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.69444em;"></span><span class="strut bottom" style="height: 0.73354em; vertical-align: -0.0391em;"></span><span class="base"><span class="mord mathit">b</span><span class="mrel">&gt;</span><span class="mord mathrm">0</span></span></span></span></span>, y calcule <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><msup><mi>a</mi><mi>b</mi></msup></mrow><annotation encoding="application/x-tex">a^b</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.849108em;"></span><span class="strut bottom" style="height: 0.849108em; vertical-align: 0em;"></span><span class="base"><span class="mord"><span class="mord mathit">a</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height: 0.849108em;"><span class="" style="top: -3.063em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathit mtight">b</span></span></span></span></span></span></span></span></span></span></span></span>.</p>
<ul>
<li><a href="./src/potencia.c">Implementación</a></li>
</ul>
</li>
<li>
<p>Diseñe una función recursiva que determine si en un vector A de n enteros existendos parejas consecutivas de elementos tales que sus sumas sean idénticas.</p>
<ul>
<li><a href="./src/parejasvector.c">Implementación</a></li>
</ul>
</li>
<li>
<p>Diseñe una función recursiva <code>binario_decimal()</code> que reciba un número en base 10 representando un número binario y devuelva el valor de ese número en decimal. Por ejemplo, la llamada <code>binario_decimal(1101)</code> recibe como parámetro el número milciento uno en base 10, el cual es interpretado como un número en base 2, y devuelve su valor decimal 13.</p>
<ul>
<li><a href="./src/binariodecimal.c">Implementación</a></li>
</ul>
</li>
</ul>
<blockquote>
<p>Nota.- No debe usarse vectores.</p>
</blockquote>
<ul>
<li>
<p>Dado un vector A de <code>n</code> enteros y un número natural <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>k</mi></mrow><annotation encoding="application/x-tex">k</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.69444em;"></span><span class="strut bottom" style="height: 0.69444em; vertical-align: 0em;"></span><span class="base"><span style="margin-right: 0.03148em;" class="mord mathit">k</span></span></span></span></span>, <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><mi>n</mi></mrow><annotation encoding="application/x-tex">1 ≤ k ≤ n</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.69444em;"></span><span class="strut bottom" style="height: 0.83041em; vertical-align: -0.13597em;"></span><span class="base"><span class="mord mathrm">1</span><span class="mrel">≤</span><span style="margin-right: 0.03148em;" class="mord mathit">k</span><span class="mrel">≤</span><span class="mord mathit">n</span></span></span></span></span>, diseñe un procedimiento recursivo que intercambie los <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>k</mi></mrow><annotation encoding="application/x-tex">k</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.69444em;"></span><span class="strut bottom" style="height: 0.69444em; vertical-align: 0em;"></span><span class="base"><span style="margin-right: 0.03148em;" class="mord mathit">k</span></span></span></span></span> primeros elementos de A con los elementos de las <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>k</mi></mrow><annotation encoding="application/x-tex">k</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.69444em;"></span><span class="strut bottom" style="height: 0.69444em; vertical-align: 0em;"></span><span class="base"><span style="margin-right: 0.03148em;" class="mord mathit">k</span></span></span></span></span> últimas posiciones, sin hacer uso de un vector auxiliar.</p>
<ul>
<li><a href="./src/intercambiar.c">Implementación</a></li>
</ul>
</li>
<li>
<p>Diseña un algoritmo que determine de forma recursiva si en un vector <code>A</code> de <code>n</code> enteros se cumple: <span class="katex--inline"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi mathvariant="normal">∀</mi><mi>α</mi><mo separator="true">,</mo><mn>1</mn><mo>≤</mo><mi>α</mi><mo>≤</mo><mo>(</mo><mfrac><mrow><mi>n</mi></mrow><mrow><mn>2</mn></mrow></mfrac><mo>)</mo><mo>:</mo><mi>A</mi><mo>[</mo><mi>α</mi><mo>]</mo><mo>=</mo><mi>A</mi><mo>[</mo><mi>n</mi><mo>−</mo><mi>α</mi><mo>+</mo><mn>1</mn><mo>]</mo></mrow><annotation encoding="application/x-tex">\forall α, 1 \leq α \leq (\frac{n}{2}) : A[α] = A[ n - α + 1]</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="strut" style="height: 0.75em;"></span><span class="strut bottom" style="height: 1.095em; vertical-align: -0.345em;"></span><span class="base"><span class="mord mathrm">∀</span><span style="margin-right: 0.0037em;" class="mord mathit">α</span><span class="mpunct">,</span><span class="mord mathrm">1</span><span class="mrel">≤</span><span style="margin-right: 0.0037em;" class="mord mathit">α</span><span class="mrel">≤</span><span class="mopen">(</span><span class="mord"><span class="mopen nulldelimiter"></span><span class="mfrac"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.695392em;"><span class="" style="top: -2.655em;"><span class="pstrut" style="height: 3em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight"><span class="mord mathrm mtight">2</span></span></span></span><span class="" style="top: -3.23em;"><span class="pstrut" style="height: 3em;"></span><span class="frac-line hide-tail" style="height: 0.04em;"><svg width="400em" height="400em" viewBox="0 0 400000 400000" preserveAspectRatio="xMinYMin slice"><path d="M0 0 h400000 v400000 h-400000z M0 0 h400000 v400000 h-400000z"></path></svg></span></span><span class="" style="top: -3.394em;"><span class="pstrut" style="height: 3em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight"><span class="mord mathit mtight">n</span></span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.345em;"></span></span></span></span><span class="mclose nulldelimiter"></span></span><span class="mclose">)</span><span class="mrel">:</span><span class="mord mathit">A</span><span class="mopen">[</span><span style="margin-right: 0.0037em;" class="mord mathit">α</span><span class="mclose">]</span><span class="mrel">=</span><span class="mord mathit">A</span><span class="mopen">[</span><span class="mord mathit">n</span><span class="mbin">−</span><span style="margin-right: 0.0037em;" class="mord mathit">α</span><span class="mbin">+</span><span class="mord mathrm">1</span><span class="mclose">]</span></span></span></span></span></p>
<ul>
<li><a href="./src/vectorsimetrico.c">Implementación</a></li>
</ul>
</li>
<li>
<p>Diseña un procedimiento recursivo que realice la ordenación por selección de los elementos de un vector.</p>
<ul>
<li><a href="./src/ordenacionseleccion.c">Implementación</a></li>
</ul>
</li>
</ul>
</div>
</body>

</html>
