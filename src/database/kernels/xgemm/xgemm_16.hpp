
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemm16' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemmHalf = {
  "Xgemm", Precision::kHalf, {"KWG", "KWI", "MDIMA", "MDIMC", "MWG", "NDIMB", "NDIMC", "NWG", "SA", "SB", "STRM", "STRN", "VWM", "VWN"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 32, 2, 8, 8, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T628                                         "}, Params{ 32, 2, 8, 16, 128, 8, 8, 32, 0, 1, 0, 1, 8, 4 } },
          { Name{"Mali-T760                                         "}, Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics Skylake ULT GT2              "}, Params{ 32, 2, 8, 8, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
          { kDeviceNameDefault                                        , Params{ 32, 2, 8, 8, 64, 16, 16, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 32, 2, 16, 16, 64, 8, 8, 64, 1, 1, 0, 0, 4, 4 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
