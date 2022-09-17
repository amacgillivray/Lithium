Lithium

Designed by Andrew MacGillivray
Deviant Art: http://agjm.deviantart.com/
And, for the bored, here's an 8tracks playlist to sample the visualizer with:
http://8tracks.com/agjm/this-year-s-gonna-be-alright

Inspired by the radiolab podcast, here: http://www.radiolab.org/story/elements/




Everything is fairly simple, so there's not much to explain.  


All of the buttons & their code is within each skin ("Lithium Light" and "Lithium Dark" .ini files). 
You can modify/customize them there.


All of the code for the visualizers is contained in .inc files in the @Resources folder (where this Readme is).  
You can open them and modify to your hearts content, there.


All of the images are contained in the @Resources\Images folder.  All images are .pngs.
 

If you do not have Microsoft Office 365 (and I mean Office 365 - office 2007 or 2010 is too old), 
open the "Font Comparisons.docx" file (or the .pdf for you cool kids without Office at all) in the @resources folder to see the recommended replacement fonts.
The standard fonts are as follows: 

Yu Gothic Light -- Headers (Hours:Minutes)
Yu Gothic       -- Subheaders (Date), Snippets (Seconds)



Now, all that said - if you have resource consumption issues, head immediately to the @Resources folder.
Once there, open both the "Visualizer.inc" and "VisualizerDark.inc" files, and set the update rate (1 by default) to 10, 20, 40, or whatever works.
Next, scroll down to [MeasureAudio] in both files, and set the FFTSize (512 by default) to 256, and the FFTOverlap (256 by default) to 128.
Lastly, make sure that colors are off.

If resource usage is still too high, leave a comment on my DA page and I can give you the already-working lua variant of the colors that I've been too lazy to put into this one.

Speaking of me being lazy, if you have to change the fonts, the semicolons will change and stop being matched to the buttons.
This can be fixed by using the buttons image in two new meters placed at the right spot.  Yell at me on DA if you need this;
it's currently 11:00PM on a Friday night and I'm too exhausted to be bothered if there's a chance nobody actually needs this.
DotumChe also has the square semi colons but it's thicker and kind of annoying.  Hope all that helps.


