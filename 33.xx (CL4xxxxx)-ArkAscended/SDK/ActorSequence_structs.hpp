#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EActorSequenceObjectReferenceType : uint8
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference
{
public:
	enum class EActorSequenceObjectReferenceType Type;                                              // 0x0(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_25B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 ActorId;                                           // 0x4(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PathToComponent;                                   // 0x18(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences
{
public:
	TArray<struct FActorSequenceObjectReference> Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(BlueprintVisible, ExportObject, InstancedReference, SubobjectReference)
	TArray<struct FActorSequenceObjectReferences> References;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, InstancedReference, SubobjectReference)
};

}


