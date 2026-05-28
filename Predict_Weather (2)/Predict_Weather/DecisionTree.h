#pragma once
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[2] <= 3.5) {
                            if (x[1] <= 93.5) {
                                if (x[0] <= 2.5) {
                                    if (x[2] <= 1.5) {
                                        if (x[0] <= 0.5) {
                                            return 0;
                                        }

                                        else {
                                            if (x[1] <= 91.0) {
                                                return 0;
                                            }

                                            else {
                                                return 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1.5) {
                                            return 7;
                                        }

                                        else {
                                            if (x[1] <= 92.5) {
                                                return 0;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 84.0) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= 87.5) {
                                            return 1;
                                        }

                                        else {
                                            if (x[1] <= 90.5) {
                                                if (x[1] <= 88.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[1] <= 89.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 0.5) {
                                    if (x[1] <= 96.5) {
                                        return 0;
                                    }

                                    else {
                                        return 7;
                                    }
                                }

                                else {
                                    if (x[2] <= 2.5) {
                                        if (x[1] <= 94.5) {
                                            if (x[2] <= 1.5) {
                                                return 2;
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 96.5) {
                                                return 2;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 95.5) {
                                            if (x[1] <= 94.5) {
                                                return 6;
                                            }

                                            else {
                                                return 5;
                                            }
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 94.5) {
                                if (x[0] <= 5.5) {
                                    if (x[1] <= 86.5) {
                                        if (x[2] <= 4.5) {
                                            if (x[1] <= 85.5) {
                                                if (x[1] <= 84.5) {
                                                    return 1;
                                                }

                                                else {
                                                    return 11;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                return 3;
                                            }

                                            else {
                                                if (x[1] <= 84.0) {
                                                    return 1;
                                                }

                                                else {
                                                    if (x[1] <= 85.5) {
                                                        return 3;
                                                    }

                                                    else {
                                                        return 3;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 90.0) {
                                            if (x[2] <= 4.5) {
                                                return 0;
                                            }

                                            else {
                                                if (x[0] <= 4.5) {
                                                    return 3;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 4.5) {
                                                if (x[1] <= 91.5) {
                                                    return 6;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }

                                            else {
                                                return 6;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 86.5) {
                                        if (x[2] <= 7.5) {
                                            if (x[1] <= 85.0) {
                                                return 1;
                                            }

                                            else {
                                                return 6;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 10.5) {
                                                if (x[0] <= 9.0) {
                                                    return 6;
                                                }

                                                else {
                                                    if (x[1] <= 81.0) {
                                                        return 6;
                                                    }

                                                    else {
                                                        return 7;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 80.5) {
                                                    return 6;
                                                }

                                                else {
                                                    if (x[0] <= 11.5) {
                                                        return 5;
                                                    }

                                                    else {
                                                        if (x[0] <= 12.5) {
                                                            if (x[1] <= 82.5) {
                                                                return 6;
                                                            }

                                                            else {
                                                                return 5;
                                                            }
                                                        }

                                                        else {
                                                            return 5;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 9.5) {
                                            if (x[2] <= 7.5) {
                                                if (x[1] <= 92.5) {
                                                    if (x[1] <= 90.5) {
                                                        if (x[0] <= 6.5) {
                                                            if (x[1] <= 89.5) {
                                                                return 10;
                                                            }

                                                            else {
                                                                return 2;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 88.5) {
                                                                return 6;
                                                            }

                                                            else {
                                                                return 5;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 6.5) {
                                                            return 5;
                                                        }

                                                        else {
                                                            return 10;
                                                        }
                                                    }
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 88.5) {
                                                    return 3;
                                                }

                                                else {
                                                    if (x[1] <= 89.5) {
                                                        return 6;
                                                    }

                                                    else {
                                                        return 7;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 88.0) {
                                                if (x[2] <= 10.5) {
                                                    return 3;
                                                }

                                                else {
                                                    return 5;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 89.5) {
                                                    return 4;
                                                }

                                                else {
                                                    return 3;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 96.5) {
                                    if (x[2] <= 4.5) {
                                        return 2;
                                    }

                                    else {
                                        if (x[2] <= 7.5) {
                                            if (x[1] <= 95.5) {
                                                return 7;
                                            }

                                            else {
                                                if (x[2] <= 6.0) {
                                                    return 2;
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 97.5) {
                                        if (x[2] <= 5.5) {
                                            return 7;
                                        }

                                        else {
                                            return 9;
                                        }
                                    }

                                    else {
                                        return 9;
                                    }
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }