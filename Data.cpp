#include "TRenderResource.h"
//
//FLOAT g_Vertices[] = {
//   0.350782,0.134766,-3.705020,
//   -0.299976,0.134766,-3.705020,
//   0.350782,0.562877,-3.586500,
//   -0.299976,0.562877,-3.586500,
//   0.435276,0.357646,-2.367070,
//   -0.384470,0.357646,-2.367070,
//   0.390268,-0.269818,-2.919710,
//   -0.339463,-0.269818,-2.919710,
//   -0.226041,0.540056,-2.367070,
//   0.276847,0.540056,-2.367070,
//   0.438828,0.349993,-2.075790,
//   0.253892,0.646877,-2.075800,
//   -0.203087,0.646877,-2.075800,
//   -0.388023,0.349993,-2.075790,
//   -0.380393,-0.399859,-2.164040,
//   0.431218,-0.400603,-2.164040,
//   0.417014,0.254447,-0.762626,
//   0.247847,0.503541,-0.762633,
//   -0.197042,0.503541,-0.762633,
//   -0.366208,0.254448,-0.762626,
//   -0.375042,-0.511327,-1.030540,
//   0.425848,-0.511328,-1.030540,
//   0.127371,0.058052,2.965310,
//   -0.076567,0.058052,2.965310,
//   -0.076567,-0.267921,2.965320,
//   0.127371,-0.267921,2.965320,
//   -0.377115,0.302220,-1.419208,
//   -0.200065,0.575209,-1.419217,
//   0.250870,0.575209,-1.419217,
//   0.427921,0.302220,-1.419208,
//   0.208380,0.642622,-2.036815,
//   -0.157575,0.642622,-2.036815,
//   -0.155154,0.579488,-1.441064,
//   0.205959,0.579488,-1.441064,
//   0.205959,0.570954,-1.397582,
//   -0.155154,0.570954,-1.397582,
//   -0.152734,0.507819,-0.801831,
//   0.203539,0.507819,-0.801831,
//   0.356128,-0.048342,-2.036815,
//   -0.305322,-0.048342,-2.036815,
//   -0.305322,-0.104661,-1.441064,
//   0.356128,-0.104661,-1.441064,
//   0.356128,-0.113195,-1.397582,
//   -0.305322,-0.113195,-1.397582,
//   -0.305322,-0.176329,-0.780043,
//   0.356128,-0.176329,-0.780043,
//   0.356128,-0.267741,-1.908320,
//   -0.305322,-0.267741,-1.908320,
//   -0.305322,-0.296094,-1.608397,
//   0.356128,-0.296094,-1.608397,
//   0.356128,-0.334132,-1.265243,
//   -0.305322,-0.334132,-1.265243,
//   -0.305322,-0.365916,-0.954351,
//   0.356128,-0.365916,-0.954351,
//   -0.385296,0.338050,-1.911644,
//   -0.323268,0.453416,-1.889030,
//   -0.253817,0.453416,-1.889030,
//   -0.305322,-0.062422,-1.887877,
//   -0.379842,0.314164,-1.583353,
//   -0.320955,0.433134,-1.601430,
//   -0.251964,0.433134,-1.601430,
//   -0.305322,-0.090581,-1.590002,
//   0.436101,0.338050,-1.911644,
//   0.374073,0.453416,-1.889030,
//   0.304622,0.453416,-1.889030,
//   0.356128,-0.062422,-1.887877,
//   0.430648,0.314163,-1.583353,
//   0.371759,0.433134,-1.601430,
//   0.302769,0.433134,-1.601430,
//   0.356128,-0.090581,-1.590002,
//   0.425194,0.290277,-1.255062,
//   0.375180,0.384325,-1.236900,
//   0.305508,0.384325,-1.236900,
//   0.356128,-0.128978,-1.243197,
//   0.419741,0.266390,-0.926771,
//   0.372827,0.354953,-0.926779,
//   0.303624,0.354953,-0.926779,
//   0.356128,-0.160545,-0.934428,
//   -0.368935,0.266391,-0.926771,
//   -0.322022,0.354953,-0.926779,
//   -0.252819,0.354953,-0.926779,
//   -0.305322,-0.160545,-0.934428,
//   -0.374389,0.290277,-1.255062,
//   -0.324375,0.384325,-1.236900,
//   -0.254703,0.384325,-1.236900,
//   -0.305322,-0.128978,-1.243197,
//   0.350782,0.562877,-3.586500,
//   0.350782,0.134766,-3.705020,
//   -0.339463,-0.269818,-2.919710,
//   -0.299976,0.562877,-3.586500,
//   0.390268,-0.269818,-2.919710,
//   0.350782,0.134766,-3.705020,
//   0.350782,0.562877,-3.586500,
//   -0.299976,0.562877,-3.586500,
//   -0.384470,0.357646,-2.367070,
//   0.276847,0.540056,-2.367070,
//   0.350782,0.562877,-3.586500,
//   -0.299976,0.562877,-3.586500,
//   0.127371,0.058052,2.965310,
//   -0.076567,0.058052,2.965310,
//   0.276847,0.540056,-2.367070,
//   0.253892,0.646877,-2.075800,
//   -0.384470,0.357646,-2.367070,
//   -0.203087,0.646877,-2.075800,
//   -0.339463,-0.269818,-2.919710,
//   0.390268,-0.269818,-2.919710,
//   0.431218,-0.400603,-2.164040,
//   -0.203087,0.646877,-2.075800,
//   -0.375042,-0.511327,-1.030540,
//   0.431218,-0.400603,-2.164040,
//   0.247847,0.503541,-0.762633,
//   0.127371,0.058052,2.965310,
//   -0.076567,0.058052,2.965310,
//   -0.076567,0.058052,2.965310,
//   -0.375042,-0.511327,-1.030540,
//   0.127371,-0.267921,2.965320,
//   0.425848,-0.511328,-1.030540,
//   0.127371,-0.267921,2.965320,
//   0.253892,0.646877,-2.075800,
//   -0.203087,0.646877,-2.075800,
//   -0.323268,0.453416,-1.889030,
//   0.374073,0.453416,-1.889030,
//   -0.324375,0.384325,-1.236900,
//   0.247847,0.503541,-0.762633,
//   0.375180,0.384325,-1.236900,
//   0.208380,0.642622,-2.036815,
//   -0.253817,0.453416,-1.889030,
//   -0.305322,-0.048342,-2.036815,
//   0.205959,0.579488,-1.441064,
//   0.205959,0.579488,-1.441064,
//   0.302769,0.433134,-1.601430,
//   0.205959,0.570954,-1.397582,
//   -0.254703,0.384325,-1.236900,
//   -0.305322,-0.113195,-1.397582,
//   -0.152734,0.507819,-0.801831,
//   0.203539,0.507819,-0.801831,
//   0.203539,0.507819,-0.801831,
//   0.303624,0.354953,-0.926779,
//   0.356128,-0.048342,-2.036815,
//   -0.305322,-0.048342,-2.036815,
//   0.356128,-0.267741,-1.908320,
//   0.356128,-0.104661,-1.441064,
//   0.356128,-0.296094,-1.608397,
//   -0.305322,-0.296094,-1.608397,
//   0.356128,-0.104661,-1.441064,
//   0.356128,-0.296094,-1.608397,
//   0.356128,-0.113195,-1.397582,
//   -0.305322,-0.113195,-1.397582,
//   0.356128,-0.334132,-1.265243,
//   0.356128,-0.176329,-0.780043,
//   0.356128,-0.365916,-0.954351,
//   -0.305322,-0.365916,-0.954351,
//   0.356128,-0.176329,-0.780043,
//   0.356128,-0.365916,-0.954351,
//   -0.324375,0.384325,-1.236900,
//   0.247847,0.503541,-0.762633,
//   0.372827,0.354953,-0.926779,
//   0.372827,0.354953,-0.926779,
//   -0.323268,0.453416,-1.889030,
//   0.371759,0.433134,-1.601430,
//   -0.253817,0.453416,-1.889030,
//   -0.254703,0.384325,-1.236900,
//   0.303624,0.354953,-0.926779,
//   0.356128,-0.365916,-0.954351,
//   0.356128,-0.334132,-1.265243,
//   0.302769,0.433134,-1.601430,
//   0.356128,-0.296094,-1.608397,
//   0.356128,-0.267741,-1.908320,
//   -0.320955,0.433134,-1.601430,
//   -0.155154,0.579488,-1.441064,
//   -0.155154,0.579488,-1.441064,
//   -0.305322,-0.296094,-1.608397,
//   0.304622,0.453416,-1.889030,
//   0.374073,0.453416,-1.889030,
//   0.208380,0.642622,-2.036815,
//   0.356128,-0.048342,-2.036815,
//   0.356128,-0.267741,-1.908320,
//   0.356128,-0.048342,-2.036815,
//   0.375180,0.384325,-1.236900,
//   0.205959,0.570954,-1.397582,
//   0.356128,-0.113195,-1.397582,
//   0.356128,-0.334132,-1.265243,
//   0.356128,-0.113195,-1.397582,
//   -0.322022,0.354953,-0.926779,
//   -0.152734,0.507819,-0.801831,
//   -0.152734,0.507819,-0.801831,
//   -0.305322,-0.365916,-0.954351,
//   0.435276,0.357646,-2.367070,
//   0.435276,0.357646,-2.367070,
//   0.425848,-0.511328,-1.030540,
//   0.127371,-0.267921,2.965320,
//   0.127371,0.058052,2.965310,
//   0.371759,0.433134,-1.601430,
//   0.250870,0.575209,-1.419217,
//   0.250870,0.575209,-1.419217,
//   0.372827,0.354953,-0.926779,
//   -0.200065,0.575209,-1.419217,
//   0.253892,0.646877,-2.075800,
//   0.304622,0.453416,-1.889030,
//   -0.203087,0.646877,-2.075800,
//   -0.320955,0.433134,-1.601430,
//   -0.200065,0.575209,-1.419217,
//   -0.322022,0.354953,-0.926779,
//   -0.322022,0.354953,-0.926779,
//   -0.197042,0.503541,-0.762633,
//   0.305508,0.384325,-1.236900,
//   0.305508,0.384325,-1.236900,
//   0.203539,0.507819,-0.801831,
//   -0.299976,0.134766,-3.705020,
//   -0.299976,0.562877,-3.586500,
//   -0.226041,0.540056,-2.367070,
//   -0.226041,0.540056,-2.367070,
//   -0.157575,0.642622,-2.036815,
//   -0.305322,-0.048342,-2.036815,
//   -0.305322,-0.267741,-1.908320,
//   -0.305322,-0.267741,-1.908320,
//   -0.305322,-0.104661,-1.441064,
//   -0.305322,-0.104661,-1.441064,
//   -0.155154,0.570954,-1.397582,
//   -0.305322,-0.113195,-1.397582,
//   -0.305322,-0.334132,-1.265243,
//   -0.305322,-0.334132,-1.265243,
//   -0.305322,-0.176329,-0.780043,
//   -0.305322,-0.176329,-0.780043,
//   -0.197042,0.503541,-0.762633,
//   -0.197042,0.503541,-0.762633,
//   -0.076567,-0.267921,2.965320,
//   -0.076567,-0.267921,2.965320,
//   -0.380393,-0.399859,-2.164040,
//   -0.380393,-0.399859,-2.164040,
//   -0.299976,0.134766,-3.705020,
//   -0.157575,0.642622,-2.036815,
//   -0.251964,0.433134,-1.601430,
//   -0.155154,0.579488,-1.441064,
//   -0.251964,0.433134,-1.601430,
//   -0.155154,0.570954,-1.397582,
//   -0.252819,0.354953,-0.926779,
//   -0.152734,0.507819,-0.801831,
//   -0.252819,0.354953,-0.926779,
//   0.205959,0.579488,-1.441064,
//   0.356128,-0.104661,-1.441064,
//   0.203539,0.507819,-0.801831,
//   0.356128,-0.176329,-0.780043,
//   -0.305322,-0.296094,-1.608397,
//   -0.305322,-0.365916,-0.954351,
//    0.000000,0.266808,-0.963750,
//    -0.998959,0.012170,-0.043960,
//    0.000000,0.266808,-0.963750,
//    0.000000,0.266808,-0.963750,
//    0.777074,0.629327,0.010145,
//    -0.997991,-0.018108,-0.060716,
//    0.000000,-0.944615,-0.328179,
//    -0.000237,-0.947423,-0.319985,
//    -0.754938,0.655688,0.011960,
//    0.754937,0.655688,0.011960,
//    0.996415,0.079394,-0.029230,
//    0.822045,0.567067,-0.051743,
//    0.000000,0.938853,-0.344317,
//    -0.996412,0.079432,-0.029208,
//    -0.999940,-0.004298,-0.010108,
//    -0.000466,-0.992027,-0.126022,
//    0.989979,0.115716,0.080940,
//    0.000000,0.992935,0.118656,
//    -0.823550,0.559299,0.094602,
//    -0.989979,0.115715,0.080940,
//    -0.998471,-0.009568,0.054440,
//    -0.000001,-0.999666,0.025858,
//    0.000000,0.992935,0.118656,
//    0.000000,0.992935,0.118656,
//    -0.997053,-0.010578,0.075983,
//    0.000000,0.000031,1.000000,
//    -0.997843,0.064118,0.014072,
//    -0.837228,0.542995,0.064850,
//    0.289480,0.946159,0.144857,
//    0.997844,0.064107,0.014083,
//    0.109412,0.900472,0.420927,
//    -0.149218,0.834089,0.531065,
//    0.000000,0.000000,-1.000000,
//    0.093231,0.949373,-0.299999,
//    0.053670,0.887061,0.458521,
//    -0.070806,0.838773,0.539857,
//    -0.147861,0.987223,-0.059393,
//    0.238919,0.956807,-0.165642,
//    0.000000,0.000000,1.000000,
//    0.000000,0.000000,1.000000,
//    0.985984,-0.166102,-0.015703,
//    0.000000,0.000000,-1.000000,
//    0.000000,0.000000,1.000000,
//    0.000000,0.000000,1.000000,
//    0.985451,-0.169080,-0.017286,
//    0.000000,-0.031831,-0.999493,
//    0.000000,0.995561,0.094115,
//    1.000000,0.000000,0.000000,
//    0.000000,0.995561,0.094115,
//    0.000000,0.995561,0.094115,
//    0.000000,0.994815,0.101705,
//    1.000000,0.000000,0.000000,
//    0.000000,0.994815,0.101705,
//    0.000000,0.994815,0.101705,
//    -0.997975,0.060060,0.020950,
//    -0.873164,0.486615,0.028134,
//    0.000000,0.901116,0.433577,
//    0.997450,-0.071058,-0.006717,
//    -0.995589,0.091093,0.022464,
//    -0.864408,0.495225,0.086895,
//    0.000000,0.989893,-0.141816,
//    0.992556,-0.096346,-0.074495,
//    0.997977,0.060033,0.020946,
//    0.873163,0.486617,0.028135,
//    -0.989858,-0.123422,0.070338,
//    -0.997449,-0.071060,-0.006718,
//    0.995593,0.091045,0.022459,
//    0.087533,0.940546,-0.328195,
//    0.000000,0.989893,-0.141815,
//    -0.992556,-0.096347,-0.074494,
//    0.997898,0.061299,0.021036,
//    0.866886,0.497720,0.027980,
//    -0.989865,-0.124386,0.068523,
//    -0.997521,-0.070000,-0.007156,
//    0.995837,0.088170,0.023112,
//    0.000000,0.961996,-0.273062,
//    0.000000,0.992194,-0.124703,
//    -0.992624,-0.093847,-0.076743,
//    -0.995837,0.088169,0.023114,
//    -0.853004,0.514724,0.086275,
//    0.000000,0.992194,-0.124703,
//    0.992624,-0.093846,-0.076744,
//    -0.997898,0.061298,0.021036,
//    -0.866887,0.497719,0.027978,
//    0.000000,0.908907,0.417000,
//    0.997522,-0.069998,-0.007156,
//    0.753723,0.654633,0.057950,
//    0.000000,-0.888961,-0.457984,
//    -0.998187,-0.003070,-0.060104,
//    -0.998037,-0.002773,-0.062566,
//    0.998364,-0.010093,-0.056285,
//    0.998959,0.012170,-0.043959,
//    0.998037,-0.002774,-0.062566,
//    -0.753723,0.654633,0.057950,
//    -0.780194,0.623981,0.044103,
//    0.000000,0.999844,-0.017632,
//    0.000000,0.999825,0.018711,
//    0.000000,0.999825,0.018711,
//    0.000000,0.000031,1.000000,
//    0.000000,0.000031,1.000000,
//    0.000000,0.938853,-0.344317,
//    0.000000,0.938853,-0.344317,
//    -0.742922,0.645252,-0.178094,
//    -0.810819,0.580867,-0.071878,
//    -0.998134,-0.059495,-0.013738,
//    0.998493,-0.003687,-0.054747,
//    0.999923,-0.003752,-0.011867,
//    -0.848788,0.528730,0.001502,
//    -0.000319,-0.998801,-0.048946,
//    0.999804,-0.011987,0.015738,
//    0.823550,0.559299,0.094603,
//    0.823639,0.559360,0.093461,
//    -0.823640,0.559359,0.093461,
//    -0.996995,0.000002,0.077461,
//    -0.000001,-0.998150,0.060802,
//    -0.000001,-0.998150,0.060802,
//    0.997693,-0.011877,0.066845,
//    0.997044,-0.014871,0.075382,
//    0.000000,0.994096,0.108500,
//    0.000000,0.994096,0.108500,
//    -0.135252,0.867776,0.478196,
//    0.123156,0.967400,0.221293,
//    -0.067228,0.872590,0.483805,
//    0.000000,0.994097,0.108494,
//    0.000000,0.953854,0.300270,
//    0.000000,0.000000,1.000000,
//    0.985155,-0.134238,0.106999,
//    0.974843,-0.137104,0.175737,
//    0.000000,0.000000,-1.000000,
//    -0.889652,-0.100364,-0.445472,
//    -0.889652,-0.100364,-0.445472,
//    0.000000,0.000000,1.000000,
//    0.985272,-0.135965,0.103693,
//    0.974812,-0.140714,0.173036,
//    0.000000,-0.031831,-0.999493,
//    0.000000,-0.031831,-0.999493,
//    -0.821165,-0.075242,-0.565709,
//    -0.821165,-0.075242,-0.565709,
//    0.000000,0.505373,0.862901,
//    0.000000,0.505373,0.862901,
//    0.000000,0.505373,0.862901,
//    0.000000,0.658124,-0.752910,
//    0.000000,0.658124,-0.752910,
//    0.000000,0.658124,-0.752910,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    0.000000,0.513858,0.857875,
//    0.000000,0.513858,0.857875,
//    0.000000,0.513858,0.857875,
//    0.000000,0.676821,-0.736148,
//    0.000000,0.676821,-0.736148,
//    0.000000,0.676821,-0.736148,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    0.000000,0.995545,0.094289,
//    0.432857,0.807272,-0.401182,
//    0.432857,0.807272,-0.401182,
//    0.837833,0.536170,0.102751,
//    0.000000,0.997523,0.070347,
//    0.849402,0.516334,0.109159,
//    0.995006,-0.099370,-0.009394,
//    0.995135,-0.098012,-0.010020,
//    -0.994755,-0.101085,-0.015617,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    -0.994728,-0.101645,-0.013577,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    -0.141911,0.799824,-0.583218,
//    -0.069126,0.983432,-0.167579,
//    0.976547,-0.214348,-0.020264,
//    1.000000,0.000000,0.000000,
//    0.000000,0.615561,0.788090,
//    0.000000,0.615561,0.788090,
//    -0.917390,-0.196164,0.346287,
//    -0.965892,-0.159283,0.204162,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    0.230131,0.746346,0.624505,
//    -0.920142,-0.201969,0.335482,
//    -0.966035,-0.163039,0.200486,
//    -1.000000,0.000000,0.000000,
//    -1.000000,0.000000,0.000000,
//    0.000000,0.632861,-0.774266,
//    0.000000,0.632861,-0.774266,
//    0.975625,-0.218308,-0.022319,
//    1.000000,0.000000,0.000000,
//    0.997456,-0.009298,-0.070678,
//    0.998134,-0.059499,-0.013735,
//    0.999989,-0.000299,0.004708,
//    0.996995,0.000002,0.077462,
//    0.996995,0.000002,0.077462,
//    0.893188,0.448008,0.038781,
//    0.831739,0.539441,0.131204,
//    0.838991,0.544140,-0.002344,
//    0.882523,0.467499,0.050974,
//    -0.205690,0.786930,0.581750,
//    0.385611,0.753550,0.532416,
//    0.000000,0.997523,0.070347,
//    -0.385611,0.753550,0.532416,
//    0.000000,0.997523,0.070347,
//    -0.300854,0.838548,-0.454229,
//    0.000000,0.995545,0.094289,
//    -0.432857,0.807272,-0.401182,
//    -0.432857,0.807272,-0.401182,
//    0.000000,0.652462,0.757821,
//    0.000000,0.995545,0.094289,
//    0.000000,0.632861,-0.774266,
//    0.000000,0.266808,-0.963750,
//    0.000000,0.999825,0.018711,
//    0.000000,0.999825,0.018711,
//    0.000000,0.938853,-0.344317,
//    0.000000,0.000000,1.000000,
//    0.000000,0.505373,0.862901,
//    0.000000,0.505373,0.862901,
//    0.000000,0.995561,0.094115,
//    0.000000,0.658124,-0.752910,
//    0.000000,0.000000,-1.000000,
//    0.000000,0.000000,1.000000,
//    0.000000,0.513858,0.857875,
//    0.000000,0.513858,0.857875,
//    0.000000,0.994815,0.101705,
//    0.000000,0.676821,-0.736148,
//    0.000000,-0.031831,-0.999493,
//    0.000000,0.994097,0.108494,
//    0.000000,0.992935,0.118656,
//    0.000000,0.000031,1.000000,
//    0.000000,-0.998150,0.060802,
//    -0.000912,-0.995199,-0.097863,
//    -0.000903,-0.985505,-0.169642,
//    0.000000,-0.888961,-0.457984,
//    0.917390,-0.196163,0.346288,
//    0.994728,-0.101643,-0.013577,
//    0.889652,-0.100362,-0.445474,
//    0.889652,-0.100362,-0.445474,
//    0.920141,-0.201967,0.335483,
//    0.994755,-0.101083,-0.015617,
//    0.821164,-0.075241,-0.565711,
//    0.821164,-0.075241,-0.565711,
//    -0.976547,-0.214350,-0.020264,
//    -0.976547,-0.214350,-0.020264,
//    -0.975624,-0.218309,-0.022320,
//    -0.975624,-0.218309,-0.022320,
//};