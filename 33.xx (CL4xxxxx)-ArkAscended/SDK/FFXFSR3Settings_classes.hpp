#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x98 - 0x38)
// Class FFXFSR3Settings.FFXFSR3Settings
class UFFXFSR3Settings : public UDeveloperSettings
{
public:
	bool                                         bEnabled;                                          // 0x38(0x1)(ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	bool                                         bAutoExposure;                                     // 0x39(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bEnabledInEditorViewport;                          // 0x3A(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUseSSRExperimentalDenoiser;                       // 0x3B(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bRHIBackend;                                       // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bD3D12Backend;                                     // 0x3D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bFrameGenEnabled;                                  // 0x3E(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bCaptureDebugUI;                                   // 0x3F(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUpdateGlobalFrameTime;                            // 0x40(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bD3D12AsyncInterpolation;                          // 0x41(0x1)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bD3D12AsyncPresent;                                // 0x42(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15BA[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EFFXFSR3QualityMode               QualityMode;                                       // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EFFXFSR3HistoryFormat             HistoryFormat;                                     // 0x48(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EFFXFSR3DeDitherMode              DeDither;                                          // 0x4C(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Sharpness;                                         // 0x50(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAdjustMipBias;                                    // 0x54(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bForceVertexDeformationOutputsVelocity;            // 0x55(0x1)(ConstParm, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15BF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EFFXFSR3LandscapeHISMMode         ForceLandscapeHISMMobility;                        // 0x58(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bReactiveMask;                                     // 0x5C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15C1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReflectionScale;                                   // 0x60(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReflectionLuminanceBias;                           // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RoughnessScale;                                    // 0x68(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RoughnessBias;                                     // 0x6C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RoughnessMaxDistance;                              // 0x70(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bReactiveMaskRoughnessForceMaxDistance;            // 0x74(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15C4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslucencyBias;                                  // 0x78(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TranslucencyLuminanceBias;                         // 0x7C(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        TranslucencyMaxDistance;                           // 0x80(0x4)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EMaterialShadingModel             ReactiveShadingModelID;                            // 0x84(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15C7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ForceReactiveMaterialValue;                        // 0x88(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReactiveHistoryTranslucencyBias;                   // 0x8C(0x4)(Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReactiveHistoryTranslucencyLumaBias;               // 0x90(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15CA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFFXFSR3Settings* GetDefaultObj();

};

}


