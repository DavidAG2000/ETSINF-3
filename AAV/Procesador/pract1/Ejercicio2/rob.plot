#!/bin/sh

resfile="rob.res"
figfile="rob.eps"

for rfsize in "test-printf.i386" "test-math.i386" "test-args.i386" "test-sort.i386"
do

  resfile="$rfsize.res"
  figfile="$rfsize.eps"
  echo "Guardando $rfsize FIGURA EN  en : $figfile"
  plotfile=$(mktemp)
  cat << EOF > $plotfile
  set term postscript eps
  set title "$rfsize"
  set size 0.5, 0.5
  set key under
  set xlabel 'BANCO DE REGISTROS'
  set ylabel 'IPC'
  set xrange [-0.5:4.3]
  set xtics ( '32' 0, '36' 1, '44' 2, '60' 3, '92' 4)


plot '$resfile' every :::0::0 w linespoints t 'cola_instrucciones_4',   \
     '$resfile' every :::1::1 w linespoints t 'cola_instrucciones_8', \
     '$resfile' every :::2::2 w linespoints t 'cola_instrucciones_16',   \
     '$resfile' every :::3::3 w linespoints t 'cola_instrucciones_32',   \
     '$resfile' every :::4::4 w linespoints t 'cola_instrucciones_64'  

      
EOF
  gnuplot $plotfile > $figfile
  rm -f $plotfile
done
