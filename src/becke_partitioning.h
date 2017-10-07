#ifndef BECKE_PARTITIONING_H_INCLUDED
#define BECKE_PARTITIONING_H_INCLUDED

double get_becke_w2(const double center_coordinates[],
                    const int center_charge[],
                    double pa[],
                    const int icent,
                    const int num_centers,
                    const double x,
                    const double y,
                    const double z);
double get_becke_w(const double x_coordinates_au[],
                   const double y_coordinates_au[],
                   const double z_coordinates_au[],
                   const int center_charge[],
                   double pa[],
                   const int icent,
                   const int num_centers,
                   const double x,
                   const double y,
                   const double z);

#endif /* BECKE_PARTITIONING_H_INCLUDED */
