using System;
using Pixelplacement;

public class Authenticating : State
{
    private void OnEnable()
    {
        
    }

    public void ConnectionSuccessful()
    {
        ChangeState("Scanning");
    }
}
