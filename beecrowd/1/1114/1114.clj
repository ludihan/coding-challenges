(defn senha [x]
  (if (= x 2002)
    (println "Acesso Permitido")
    (do (println "Senha Invalida")
        (recur (read)))))

(senha (read))
