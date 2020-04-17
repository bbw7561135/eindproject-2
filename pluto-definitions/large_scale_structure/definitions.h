#define  PHYSICS                        MHD
#define  DIMENSIONS                     2
#define  COMPONENTS                     3
#define  GEOMETRY                       CARTESIAN
#define  BODY_FORCE                     NO
#define  FORCED_TURB                    NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  RK2
#define  DIMENSIONAL_SPLITTING          NO
#define  NTRACER                        0
#define  USER_DEF_PARAMETERS            8

/* -- physics dependent declarations -- */

#define  EOS                            IDEAL
#define  ENTROPY_SWITCH                 NO
#define  DIVB_CONTROL                   DIV_CLEANING
#define  BACKGROUND_FIELD               NO
#define  AMBIPOLAR_DIFFUSION            NO
#define  RESISTIVITY                    NO
#define  HALL_MHD                       NO
#define  THERMAL_CONDUCTION             NO
#define  VISCOSITY                      NO
#define  ROTATING_FRAME                 NO

/* -- user-defined parameters (labels) -- */

#define  RHO_INS                        0
#define  RHO_OUT                        1
#define  T_INS                          2
#define  T_OUT                          3
#define  DIAM                           4
#define  B_OUT                          5
#define  WAVE_HEIGHT                    6
#define  WAVE_DURATION                  7

/* [Beg] user-defined constants (do not change this line) */

#define  UNIT_DENSITY                   (1.e9*CONST_mp)
#define  UNIT_LENGTH                    1.e8
#define  UNIT_VELOCITY                  1.e8

/* [End] user-defined constants (do not change this line) */
