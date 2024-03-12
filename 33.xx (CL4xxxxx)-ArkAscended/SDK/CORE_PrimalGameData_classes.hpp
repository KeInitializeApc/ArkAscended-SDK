#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x31E0 - 0x31C0)
// BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
class UCORE_PrimalGameData_C : public UPrimalGameData
{
public:
	TArray<struct FHairMetaData>                 FemaleHairStylesMetaDatas;                         // 0x31C0(0x10)(BlueprintVisible, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FHairMetaData>                 MaleHairStylesMetaDatas;                           // 0x31D0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCORE_PrimalGameData_C* GetDefaultObj();

};

}


