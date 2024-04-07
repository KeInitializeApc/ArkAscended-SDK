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
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
struct IAudioParameterControllerInterface_SetStringParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
struct IAudioParameterControllerInterface_SetStringArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FString>                        InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
struct IAudioParameterControllerInterface_SetParameters_Blueprint_Params
{
public:
	TArray<struct FAudioParameter>               InParameters;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
struct IAudioParameterControllerInterface_SetObjectParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UObject*                               InValue;                                           // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
struct IAudioParameterControllerInterface_SetObjectArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
struct IAudioParameterControllerInterface_SetIntParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        InInt;                                             // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
struct IAudioParameterControllerInterface_SetIntArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
struct IAudioParameterControllerInterface_SetFloatParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        InFloat;                                           // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
struct IAudioParameterControllerInterface_SetFloatArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<float>                                InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
struct IAudioParameterControllerInterface_SetBoolParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         InBool;                                            // 0x8(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CE7[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
struct IAudioParameterControllerInterface_SetBoolArrayParameter_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 InValue;                                           // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}

