#!/bin/bash
func() {
		echo -n "$1するための情報を集めています"
		for ((i = 0; i < $3; ++i)); do
				echo -n "."
				sleep 0.05
		done
		echo -n "$1する準備が整いました"
		sleep 0.5
		echo -e "\n$1開始\n"
		$2
		echo -e "\n$1終了"
}

func コンパイル   make\ exe       $(((RANDOM % 30) + 1))
func 実行         ./executable.sh $(((RANDOM % 30) + 1))
func クリーニング make\ clean     $(((RANDOM % 30) + 1))

exit 0
