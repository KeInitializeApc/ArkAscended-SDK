#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x1711 - 0x1700)
// BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
class AStructureSeatingBaseBP_C : public APrimalStructureSeating
{
public:
	class UChildActorComponent*                  TargetingEmitter;                                  // 0x1700(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x1708(0x8)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         bAllowFishing;                                     // 0x1710(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class AStructureSeatingBaseBP_C* GetDefaultObj();

};

}


