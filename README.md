# The Study and Implementation of Incentive  Techniques for Value-based Data Sharing
This thesis  for degree of Master of Engineering(Computer Technique) was submitted to University of Electronic Science and Technology of China (UESTC) in 2020. See [pdf](https://github.com/luotong96/ThesisUESTC/main.pdf) for original paper in Chinese.

## Abstract:

With the continuous development of science and technology, people's daily life produces massive data, and the analysis and application of these data resources have created a large number of economic and social values. For centralized data resources, the existing big data analysis technology can be applied for value mining easily. However, it's hard to deploy efficient joint application to the massive geographically distributed data owned by different organizations and individuals. Due to many factors such as cost, privacy, and social regulation, rational data owners may not be willing to donate their data directly. This resulted in the phenomenon of "data island". And the goal of value-based data sharing is to exploit these geographically distributed multi-party data as much as possible to construct computing applications while avoiding the direct transfer of the original data so as to ensure data security. That is, to share the value of data instead of data itself.

Therefore, this thesis proposes a value-based data sharing scheme, which avoids sharing original data directly while transferring data values. In the scheme, there will be competitions between data owners who provide equivalent content. For the purpose of breaking the tie, selecting the winners who participate in the scheme, encouraging rational participants to be as truthfully as possible, ensuring the effectiveness of the scheme and maximizing the overall welfare of the system, it designs ideal incentive mechanisms for two specific scenarios. The specific work of this thesis is as follows:

Firstly, a multi-party value-base data sharing scheme is proposed. Aiming at simple and parallelizable computation tasks, a multi-constraint value-based data sharing incentive model follows. Specifically, the formal modeling of the problem is carried out, then three specific application instances (data volume constraint, indicator set constraint, organization constraint) are analysed, after that a DSIC incentive auction mechanism which is computational effective, truthful as well as social welfare maximized is designed. Simulation experiments show the effectiveness and good performance of the model.

Secondly, for dependency-related computation tasks, a time-sensitive value-based data sharing incentive model is proposed, in which execution time is taken as an essential limiting indicator. Specifically, the task flow is modeled by AOE network. After that, the NP hardness of corresponding social welfare maximization problem is demonstrated. Then, the ineffectiveness of some greedy thoughts is proved while another greedy heuristic algorithm is given which works well to approximate the optimal allocation rule. Finally, the optimal auction mechanism considering the revenue of the task initiator is given. Simulation experiments show the effectiveness of the model.

Eventually, this thesis designs and implements a value-based data sharing auction system. In addition to overall design,the subsystem and modular design is completed correspondingly. The above multi-constraint value-based data sharing incentive model and time-sensitive value-based data sharing incentive model are deployed to specific application environments. The core process of the auction is displayed then, which shows good performance of the system.

## Keywords

mechanism design，data value，multi-party computation，knapsack auction

