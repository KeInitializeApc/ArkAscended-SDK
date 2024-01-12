#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
class UUI_BrowseMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class FString                                InitialClassCategoryName;                          // 0x9F8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_BrowseMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList);
	bool UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, bool Temp_bool_Variable, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	class FText GetCurrentSearchInput(class FText CallFunc_Conv_StringToText_ReturnValue);
	void ResetPageNum();
	void GetMods();
	void Construct();
	void Destruct();
	void ConstructParentPage();
	struct FCFCoreApiRequestPagination ExecuteUbergraph_UI_BrowseMods(bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue);
};

}


