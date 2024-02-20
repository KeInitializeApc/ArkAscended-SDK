#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA40 - 0xA10)
// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
class UUI_BrowseMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                InitialClassCategoryName;                          // 0xA18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsSearchingForExplicitMod;                         // 0xA28(0x1)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A08[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExplicitModFound;                                // 0xA30(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_BrowseMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot);
	bool UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default);
	void GetCurrentSearchInput(class FText CurrentSearchInput, class FText* CallFunc_Conv_StringToText_ReturnValue);
	void ResetPageNum();
	void GetMods();
	void Construct();
	void Destruct();
	void ConstructParentPage();
	void GetModIDs(const TArray<int64>& ForModIDs);
	int32 ExecuteUbergraph_UI_BrowseMods(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, struct FCFCoreSearchModsFilter* CallFunc_FilterModInfo_ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FCFCoreApiRequestPagination* CallFunc_MakeApiRequestPagination_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<int64>& K2Node_Event_ForModIDs, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2);
	void OnExplicitModFound__DelegateSignature(class UUI_GameSlot_C* ForGameSlot);
};

}


