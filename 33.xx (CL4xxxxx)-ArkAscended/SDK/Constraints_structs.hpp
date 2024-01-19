#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHandleEvent : uint8
{
	LocalTransformUpdated          = 0,
	GlobalTransformUpdated         = 1,
	ComponentUpdated               = 2,
	Max                            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x100 - 0x100)
// ScriptStruct Constraints.MovieSceneConstraintChannel
struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{
public:
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Constraints.ConstraintAndActiveChannel
struct FConstraintAndActiveChannel
{
public:
	TSoftObjectPtr<class UTickableConstraint>    Constraint;                                        // 0x0(0x30)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FMovieSceneConstraintChannel          ActiveChannel;                                     // 0x30(0x100)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTickableConstraint*                   ConstraintCopyToSpawn;                             // 0x130(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct Constraints.ConstraintTickFunction
struct FConstraintTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_C8E[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

}


