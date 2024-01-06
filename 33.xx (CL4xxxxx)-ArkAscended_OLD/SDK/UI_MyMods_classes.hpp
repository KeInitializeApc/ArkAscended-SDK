#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_MyMods.UI_MyMods_C
class UUI_MyMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_MyMods_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo);
	int32 UpdatePagination(bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_Conv_IntToDouble_ReturnValue, int32* CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText* CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, double* CallFunc_Conv_IntToDouble_ReturnValue_1, int32* K2Node_Select_Default);
	void GetMods();
	void Event_On_Mod_Installed(const struct FInstallProgressMod& Mod);
	void Destruct();
	void Construct();
	bool ExecuteUbergraph_UI_MyMods(int32* EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>* K2Node_MakeArray_Array);
};

}


