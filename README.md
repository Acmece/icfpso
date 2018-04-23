# icfpso
This is an algorithm modified for registration of point cloud.
It combines the icf(iterative closest face) and pso(particle swarm optimization) algorithms. 
Here is a flowchart of our algorithm:
<div style="align: center">
<img src="https://github.com/Acmece/icfpso/blob/master/flowchart.png" width=50% height=50% />
</div>

You can refer to [poster](https://github.com/Acmece/icfpso/blob/master/poster.pdf) for more information



## Model
We test on 10 STL models
<div style="align: center">
<img src="https://github.com/Acmece/icfpso/blob/master/stlmodel.png" />
</div>




## Registraton Result
The point cloud in green: standard pose; The point cloud in white: captured pose; The point cloud in red: searched pose.
The more accurate the searched results are, the more similar the standard pose and searched pose will be.
<div style="align: center">
<img src="https://github.com/Acmece/icfpso/blob/master/registration.png" width="70%" height="70%" />
</div>
