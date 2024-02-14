(let [salario (read)
      ajustar-salario (fn [salario-original percentual]
                        (printf (str "Novo salario: %.2f\n"
                                     "Reajuste ganho: %.2f\n"
                                     "Em percentual: %.0f %%\n")
                                (+ salario-original (* salario-original percentual))
                                (* salario-original percentual)
                                (* 100 percentual)))]
  (cond
    (> salario 2000.00) (ajustar-salario salario 0.04)
    (>= salario 1200.01) (ajustar-salario salario 0.07)
    (>= salario 800.01) (ajustar-salario salario 0.10)
    (>= salario 400.01) (ajustar-salario salario 0.12)
    (>= salario 0.0) (ajustar-salario salario 0.15)))
