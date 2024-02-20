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
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FOpenColorIOColorConversionSettings   ConversionSettings;                                // 0x8(0x98)(ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              InputTexture;                                      // 0xA0(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                OutputRenderTarget;                                // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_675[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params
{
public:
	TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
struct UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params
{
public:
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0x0(0x50)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
struct UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params
{
public:
	struct FOpenColorIODisplayConfiguration      ReturnValue;                                       // 0x0(0xA0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSceneViewExtensionIsActiveFunctor    IsActiveFunction;                                  // 0xA0(0x50)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_6B4[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
struct UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params
{
public:
	struct FOpenColorIODisplayConfiguration      InDisplayConfiguration;                            // 0x0(0xA0)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UOpenColorIODisplayExtensionWrapper*   ReturnValue;                                       // 0xA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


