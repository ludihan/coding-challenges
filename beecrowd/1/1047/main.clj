(let [hora-inicial (read)
      minuto-inicial (read)
      hora-final (read)
      minuto-final (read)
      inicial (+ minuto-inicial (* hora-inicial 60))
      final (+ minuto-final (* hora-final 60))
      duracao-total (* 24 60)
      calcular-tempo #(printf "O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n" %1 %2)]
  (cond
    (< inicial final) (calcular-tempo
                        (quot (- final inicial) 60)
                        (rem (- final inicial) 60))
    (> inicial final) (calcular-tempo
                        (quot (+ (- duracao-total inicial) final) 60)
                        (rem (+ (- duracao-total inicial) final) 60))
    (= inicial final) (calcular-tempo
                        24
                        0)))
