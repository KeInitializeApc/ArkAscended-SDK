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

// 0xB8 (0xB8 - 0x0)
// Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
struct UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FOpenColorIOColorConversionSettings   ConversionSettings;                                // 0x8(0x98)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture*                              InputTexture;                                      // 0xA0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                OutputRenderTarget;                                // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7F0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
{
public:
	TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
{
public:
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0x0(0x50)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      ReturnValue;                                       // 0x0(0xA0)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0xA0(0x50)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xF0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_82B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xA0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


