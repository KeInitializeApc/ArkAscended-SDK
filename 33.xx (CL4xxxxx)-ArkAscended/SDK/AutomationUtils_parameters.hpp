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

// 0x28 (0x28 - 0x0)
// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
public:
	class FString                                ScreenshotName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxGlobalError;                                    // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxLocalError;                                     // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                MapNameOverride;                                   // 0x18(0x10)(BlueprintVisible, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

}
}


