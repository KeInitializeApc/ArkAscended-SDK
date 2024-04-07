#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x810 - 0x7E8)
// WidgetBlueprintGeneratedClass SteamInventoryPopupUI.SteamInventoryPopupUI_C
class USteamInventoryPopupUI_C : public UUI_SteamInventoryStatusPopup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               CloseButton;                                       // 0x7F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image_0;                                           // 0x7F8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_1;                                           // 0x800(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_255;                                         // 0x808(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, AssetRegistrySearchable)

	static class UClass* StaticClass();
	static class USteamInventoryPopupUI_C* GetDefaultObj();

	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_SteamInventoryPopupUI(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn** CallFunc_GetOwningPlayerPawn_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
};

}


