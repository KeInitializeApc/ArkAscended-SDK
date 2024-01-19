#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetTime
struct ATrueSkySequenceActor_SetTime_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
struct ATrueSkySequenceActor_SetPointLightSource_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FLinearColor                          LightColour;                                       // 0x4(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Intensity;                                         // 0x14(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config)
	struct FVector                               Pos;                                               // 0x18(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinRadius;                                         // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxRadius;                                         // 0x34(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
struct ATrueSkySequenceActor_SetPointLight_Params
{
public:
	class APointLight*                           Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
struct ATrueSkySequenceActor_SetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	int32                                        Value;                                             // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_2DA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
struct ATrueSkySequenceActor_SetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_2E5[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
struct ATrueSkySequenceActor_SetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        Value;                                             // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_2E6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
struct ATrueSkySequenceActor_SetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_2E8[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
struct ATrueSkySequenceActor_GetSunRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
struct ATrueSkySequenceActor_GetSunColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
{
public:
	int32                                        Layer;                                             // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
struct ATrueSkySequenceActor_GetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_311[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
struct ATrueSkySequenceActor_GetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_313[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	float                                        ReturnValue;                                       // 0x18(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_315[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
struct ATrueSkySequenceActor_GetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_319[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
struct ATrueSkySequenceActor_GetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        ReturnValue;                                       // 0x10(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_31C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
struct ATrueSkySequenceActor_CloudPointTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_321[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Pos;                                               // 0x8(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_322[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
struct ATrueSkySequenceActor_CloudLineTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_336[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StartPos;                                          // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               EndPos;                                            // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x38(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_33E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


