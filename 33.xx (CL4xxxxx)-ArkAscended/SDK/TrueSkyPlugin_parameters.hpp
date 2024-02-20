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
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLightSource
struct ATrueSkySequenceActor_SetPointLightSource_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FLinearColor                          LightColour;                                       // 0x4(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Intensity;                                         // 0x14(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, Config)
	struct FVector                               Pos;                                               // 0x18(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MinRadius;                                         // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRadius;                                         // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetPointLight
struct ATrueSkySequenceActor_SetPointLight_Params
{
public:
	class APointLight*                           Source;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeInt
struct ATrueSkySequenceActor_SetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	int32                                        Value;                                             // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_28D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetKeyframeFloat
struct ATrueSkySequenceActor_SetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_292[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_293[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetInt
struct ATrueSkySequenceActor_SetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        Value;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_296[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.SetFloat
struct ATrueSkySequenceActor_SetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_29A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunRotation
struct ATrueSkySequenceActor_GetSunRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetSunColor
struct ATrueSkySequenceActor_GetSunColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableSkyKeyframe
struct ATrueSkySequenceActor_GetNextModifiableSkyKeyframe_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetNextModifiableCloudKeyframe
struct ATrueSkySequenceActor_GetNextModifiableCloudKeyframe_Params
{
public:
	int32                                        Layer;                                             // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeInt
struct ATrueSkySequenceActor_GetKeyframeInt_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	int32                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2A3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetKeyframeFloat
struct ATrueSkySequenceActor_GetKeyframeFloat_Params
{
public:
	int32                                        KeyframeUid;                                       // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	float                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2A9[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetInt
struct ATrueSkySequenceActor_GetInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	int32                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2AC[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.GetFloat
struct ATrueSkySequenceActor_GetFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        ReturnValue;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2B0[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudPointTest
struct ATrueSkySequenceActor_CloudPointTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Pos;                                               // 0x8(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2BB[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function TrueSkyPlugin.TrueSkySequenceActor.CloudLineTest
struct ATrueSkySequenceActor_CloudLineTest_Params
{
public:
	int32                                        QueryID;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StartPos;                                          // 0x8(0x18)(Edit, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               EndPos;                                            // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReturnValue;                                       // 0x38(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2C3[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


