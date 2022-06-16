using Pixelplacement;

public class Authenticating : State
{
    public void ConnectionSuccessful()
    {
        ChangeState("Scanning");
    }
}
