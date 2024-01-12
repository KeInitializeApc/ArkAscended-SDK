#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x1619 - 0x1608)
// BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
class AStructureSeatingBaseBP_C : public APrimalStructureSeating
{
public:
	class UChildActorComponent*                  TargetingEmitter;                                  // 0x1608(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x1610(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	bool                                         bAllowFishing;                                     // 0x1618(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AStructureSeatingBaseBP_C* GetDefaultObj();

};

}


