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

// 0x8 (0x8 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
struct IAudioParameterControllerInterface_SetTriggerParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
struct IAudioParameterControllerInterface_SetStringParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
struct IAudioParameterControllerInterface_SetStringArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FString>                        InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
struct IAudioParameterControllerInterface_SetParameters_Blueprint_Params
{
public:
	TArray<struct FAudioParameter>               InParameters;                                      // 0x0(0x10)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
struct IAudioParameterControllerInterface_SetObjectParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               InValue;                                           // 0x8(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
struct IAudioParameterControllerInterface_SetObjectArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
struct IAudioParameterControllerInterface_SetIntParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InInt;                                             // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
struct IAudioParameterControllerInterface_SetIntArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
struct IAudioParameterControllerInterface_SetFloatParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InFloat;                                           // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
struct IAudioParameterControllerInterface_SetFloatArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
struct IAudioParameterControllerInterface_SetBoolParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         InBool;                                            // 0x8(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FC5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
struct IAudioParameterControllerInterface_SetBoolArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<bool>                                 InValue;                                           // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

}
}


