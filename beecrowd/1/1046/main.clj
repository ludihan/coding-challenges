(let [hora-inicial (read)
      hora-final (read)
      calcular-tempo (fn [horas] (printf "O JOGO DUROU %d HORA(S)\n" horas))]
  (cond
    (< hora-inicial hora-final) (calcular-tempo (- hora-final hora-inicial))
    (> hora-inicial hora-final) (calcular-tempo (+ (- 24 hora-inicial) hora-final))
    (= hora-inicial hora-final) (calcular-tempo 24)))
