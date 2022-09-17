[rainmeter]
update=1


[
;//-------------------------------------------------------------
;//-------------------------------------------------------------
;//                        TOP BARS
;//-------------------------------------------------------------
;//-------------------------------------------------------------
]


[TBars]
BarOrientation=Vertical
BarImage=#@#Images\ThinBars.png
ImageTint=#Color1#
Flip=0
X=2R
Y=0

[BarsBGT]
Meter=Image
SolidColor=0,0,0,1
W=200
H=51

[UnderTL]
Meter=Image
SolidColor=#Color1#
W=200
H=1
X=0
Y=51

[
;//----------------------------------	---------------------------
;//-------------------------------------------------------------
;//                      BOTTOM BARS
;//-------------------------------------------------------------
;//-------------------------------------------------------------
]


[Bars]
BarOrientation=Vertical
BarImage=#@#Images\ThinBars.png
ImageTint=#Color1#
Flip=1
Y=197
X=2R

[BarsBG]
Meter=Image
SolidColor=0,0,0,1
W=200
H=51
Y=195

[UnderL]
Meter=Image
SolidColor=#Color1#
W=200
H=1
X=0
Y=194


[
;//-------------------------------------------------------------
;//-------------------------------------------------------------
;//                         MEASURES
;//-------------------------------------------------------------
;//-------------------------------------------------------------
]


[calcR]
measure=calc
formula=(((measureband0+measureband1+measureband2+measureband3+measureband4+measureband5+measureband6+measureband7+measureband8+measureband9+measureband10+measureband11+measureband12+measureband13+measureband14+measureband15+measureband16+measureband17)/18)*(80))

[calcG]
measure=calc
formula=(((measureband0+measureband1+measureband2+measureband3+measureband4+measureband5+measureband6+measureband7+measureband8+measureband9+measureband10+measureband11+measureband12+measureband13+measureband14+measureband15+measureband16+measureband17)/18)*(100))

[calcB]
measure=calc
formula=(((measureband0+measureband1+measureband2+measureband3+measureband4+measureband5+measureband6+measureband7+measureband8+measureband9+measureband10+measureband11+measureband12+measureband13+measureband14+measureband15+measureband16+measureband17)/18)*(120))

[MeasureAudio]
measure=plugin
plugin=audiolevel
port=output
FFTSize=1024
;//CPU usage too high?  Try setting FFTSize to 256.
FFTOverlap=512
;//CPU usage too high?  Try setting FFTOverlap to 128.
FFTAttack=125
FFTDecay=200  
Bands=18
FreqMin=10
FreqMax=21000
Sensitivity=50

[MeasureBand0]
measure=plugin
plugin=audiolevel
parent=measureaudio
type=band
bandIDx=0
Channel=Sum


[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=1
Channel=Sum

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=2
Channel=Sum

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=3
Channel=Sum

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=4
Channel=Sum

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=5
Channel=Sum

[MeasureBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=6
Channel=Sum

[MeasureBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=7
Channel=Sum

[MeasureBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=8
Channel=Sum

[MeasureBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=9
Channel=Sum

[MeasureBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=10
Channel=Sum

[MeasureBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=11
Channel=Sum

[MeasureBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=12
Channel=Sum

[MeasureBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=13
Channel=Sum

[MeasureBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=14
Channel=Sum

[MeasureBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=15
Channel=Sum

[MeasureBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=16
Channel=Sum

[MeasureBand17]
measure=plugin
plugin=audiolevel
parent=measureaudio
type=band
bandIDx=17
Channel=Sum

[
;//-------------------------------------------------------------
;//-------------------------------------------------------------
;//                      TOP BAR METERS
;//-------------------------------------------------------------
;//-------------------------------------------------------------
]


[MeterTBar0]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand0
X=2
dynamicvariables=1

[MeterTBar1]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand1
dynamicvariables=1

[MeterTBar2]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand2
dynamicvariables=1

[MeterTBar3]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand3
dynamicvariables=1

[MeterTBar4]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand4
dynamicvariables=1

[MeterTBar5]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand5
dynamicvariables=1

[MeterTBar6]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand6
dynamicvariables=1

[MeterTBar7]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand7
dynamicvariables=1

[MeterTBar8]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand8
dynamicvariables=1

[MeterTBar9]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand9
dynamicvariables=1

[MeterTBar10]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand10
dynamicvariables=1

[MeterTBar11]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand11
dynamicvariables=1

[MeterTBar12]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand12
dynamicvariables=1

[MeterTBar13]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand13
dynamicvariables=1

[MeterTBar14]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand14
dynamicvariables=1

[MeterTBar15]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand15
dynamicvariables=1

[MeterTBar16]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand16
dynamicvariables=1

[MeterTBar17]
Meter=Bar
MeterStyle=TBars
MeasureName=MeasureBand17
dynamicvariables=1


[
;//-------------------------------------------------------------
;//-------------------------------------------------------------
;//                        BAR METERS
;//-------------------------------------------------------------
;//-------------------------------------------------------------
]


[MeterBar0]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand0
X=2
dynamicvariables=1

[MeterBar1]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand1
dynamicvariables=1

[MeterBar2]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand2
dynamicvariables=1

[MeterBar3]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand3
dynamicvariables=1

[MeterBar4]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand4
dynamicvariables=1

[MeterBar5]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand5
dynamicvariables=1

[MeterBar6]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand6
dynamicvariables=1

[MeterBar7]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand7
dynamicvariables=1

[MeterBar8]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand8
dynamicvariables=1

[MeterBar9]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand9
dynamicvariables=1

[MeterBar10]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand10
dynamicvariables=1

[MeterBar11]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand11
dynamicvariables=1

[MeterBar12]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand12
dynamicvariables=1

[MeterBar13]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand13
dynamicvariables=1

[MeterBar14]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand14
dynamicvariables=1

[MeterBar15]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand15
dynamicvariables=1

[MeterBar16]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand16
dynamicvariables=1

[MeterBar17]
Meter=Bar
MeterStyle=Bars
MeasureName=MeasureBand17
dynamicvariables=1


