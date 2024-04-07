#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneSlopedWall_Left.EngramEntry_StoneSlopedWall_Left_C
// (None)

class UClass* UEngramEntry_StoneSlopedWall_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneSlopedWall_Left_C");

	return Clss;
}


// EngramEntry_StoneSlopedWall_Left_C EngramEntry_StoneSlopedWall_Left.Default__EngramEntry_StoneSlopedWall_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneSlopedWall_Left_C* UEngramEntry_StoneSlopedWall_Left_C::GetDefaultObj()
{
	static class UEngramEntry_StoneSlopedWall_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneSlopedWall_Left_C*>(UEngramEntry_StoneSlopedWall_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


